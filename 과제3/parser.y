%{
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

int current_type;
%}

%token TCONST TELSE TIF TINT TFLOAT TRETURN TVOID TWHILE
%token TADD TSUB TMUL TDIV TMOD
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TOR TAND TNOT
%token TEQUAL TNOTEQU TGREATE TLESSE TGREAT TLESS
%token TINC TDEC
%token TBRASL TBRASR TBRAML TBRAMR TBRALL TBRALR TCOMMA TSEMICOLON
%token TIDENT 
%token TNUMBER TRNUMBER
%nonassoc LOWER_THAN_ELSE
%nonassoc TELSE

%%
mini_c 				: translation_unit
					;
translation_unit 	: external_dcl	// 문장하나			
					| translation_unit external_dcl
					//| translation_unit error {yyerrok; printf("unexpected %s\n", yytext);}
					;
external_dcl 		: function_def
		  			| declaration
					;
function_def 		: function_header compound_st// 중괄호 
					| function_header error {printf("unexpected tokens");} compound_st {yyerrok;}
					;
function_header 	: dcl_spec function_name formal_param { printf("header complete\n");type = NONTYPE;}// 파라미터
					;
dcl_spec 			: dcl_specifiers
					;
dcl_specifiers 		: dcl_specifier					// const, int, float, void	1번
		 			| dcl_specifiers dcl_specifier // *** const int 2번이상?
					;
dcl_specifier 		: type_qualifier
					| type_specifier
					;
type_qualifier 		: TCONST	// 여기도 current 에러 처리 해야되나?
					;
type_specifier 		: TINT 		{current_type = INTEGER;}
					| TFLOAT 	{current_type = FLOAT;}					
		 			| TVOID		{current_type = VOID;}
					;
function_name 		: TIDENT 	{type = FUNCTION; idEntry->maintype = type; idEntry->subtype = current_type;}
					;
formal_param 		: TBRASL opt_formal_param TBRASR
					| TBRASL opt_formal_param error {yyerrok; cErrors++; printf("')' is missing\n");}
					;
opt_formal_param 	: formal_param_list	
					|
					;
formal_param_list 	: param_dcl				
		    		| formal_param_list TCOMMA param_dcl
					;
param_dcl 			: dcl_spec declarator
					;
compound_st 		: TBRAML opt_dcl_list opt_stat_list TBRAMR
				 	| TBRAML opt_dcl_list opt_stat_list error {yyerrok; cErrors++; printf("'}' is disappear%s'\n", yytext);}
					;
opt_dcl_list 		: declaration_list			
					|
					;
declaration_list 	: declaration				
					| declaration_list declaration // 선언이 여러개올수잇음
					//| error declaration {yyerrok;}
	 				;
declaration 		: dcl_spec init_dcl_list TSEMICOLON
					| dcl_spec init_dcl_list error {yyerrok; cErrors++; printf("';' is disapper before '%s'\n", yytext); }
					//| error TSEMICOLON {yyerrok; cErrors; printf("invalid declaration\n");}
					;
init_dcl_list 		: init_declarator			
					| init_dcl_list TCOMMA init_declarator 
					;
init_declarator 	: declarator					
		 			| declarator TASSIGN TNUMBER
					| declarator TASSIGN TRNUMBER
					;
declarator 			: TIDENT { // 스칼라 or 배열 or 파라미터
						if(type == FUNCTION){ // 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 스칼라
							idEntry->maintype = SCALAR;
						}
						idEntry->subtype = current_type;
					}					
	     			| TIDENT TBRALL opt_number TBRALR {idEntry->maintype = ARRAY; idEntry->subtype = current_type;} // 배열
					//| TIDENT TBRALL opt_number error {yyerrok; cErrors++; printNoBracket();}
					;
opt_number 			: TNUMBER
					| TRNUMBER 	
					|			
					;
opt_stat_list 		: statement_list
					|				
					;
statement_list 		: statement				
		 			| statement_list statement
	 				;
statement 			: compound_st			
	   				| expression_st			
	   				| if_st					
	   				| while_st			
	   				| return_st				
	   				;
expression_st 		: opt_expression TSEMICOLON
					//| opt_expression error {yyerrok; cErrors++; printNoSemicolon();}
					;
opt_expression 		: expression
					|				
					;
if_st 				: TIF TBRASL expression TBRASR statement %prec LOWER_THAN_ELSE	
					| TIF TBRASL expression TBRASR statement TELSE statement
		 			;
while_st 			: TWHILE TBRASL expression TBRASR statement
			 		;
return_st 			: TRETURN opt_expression TSEMICOLON
					;
expression 			: assignment_exp
					;
assignment_exp 		: logical_or_exp			
					| unary_exp TASSIGN assignment_exp 		
					| unary_exp TADDASSIGN assignment_exp 	
					| unary_exp TSUBASSIGN assignment_exp 	
					| unary_exp TMULASSIGN assignment_exp 	
					| unary_exp TDIVASSIGN assignment_exp 	
					| unary_exp TMODASSIGN assignment_exp
					;
logical_or_exp 		: logical_and_exp			
					| logical_or_exp TOR logical_and_exp
		 			;
logical_and_exp 	: equality_exp				
		 			| logical_and_exp TAND equality_exp
		 			;
equality_exp 		: relational_exp			
					| equality_exp TEQUAL relational_exp 	
					| equality_exp TNOTEQU relational_exp
		 			;
relational_exp 		: additive_exp 			
					| relational_exp TGREAT additive_exp 	
					| relational_exp TLESS additive_exp 	
					| relational_exp TGREATE additive_exp 	
					| relational_exp TLESSE additive_exp
		 			;
additive_exp 		: multiplicative_exp			
					| additive_exp TADD multiplicative_exp 	
					| additive_exp TSUB multiplicative_exp
		 			;
multiplicative_exp 	: unary_exp				
		    		| multiplicative_exp TMUL unary_exp 	
		    		| multiplicative_exp TDIV unary_exp 	
		    		| multiplicative_exp TMOD unary_exp
				 	;
unary_exp 			: postfix_exp				
	   				| TSUB unary_exp // 마이너스 		
	   				| TNOT unary_exp				
	   				| TINC unary_exp			
	   				| TDEC unary_exp
					;
postfix_exp 		: primary_exp	// id나 숫자			
	      			| postfix_exp TBRALL expression TBRALR 	// 배열 a[i+2]
	      			| postfix_exp TBRASL opt_actual_param TBRASR // 함수 파라미터 여러개 ()	
	      			| postfix_exp TINC	// ++		
	      			| postfix_exp TDEC  // --
					;
opt_actual_param 	: actual_param							
					;
actual_param 		: actual_param_list
					|
					;
actual_param_list 	: assignment_exp	// 파라미터 한개		
		   			| actual_param_list TCOMMA assignment_exp // 파라미터 여러개
					//| error {yyerrok; cErrors++; printSyntaxErr();}
					;
primary_exp 		: TIDENT		
	     			| TNUMBER
					| TRNUMBER				
	     			| TBRASL expression TBRASR
					//| TBRASL expression error {yyerrok; cErrors++; printNoBracket();}
					;
%%
