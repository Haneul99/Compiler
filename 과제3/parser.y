/*
 * parser.y - YACC source for the Modified MiniC
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.05.26
 */

%{
#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

int current_data_type = NONTYPE;
int check_const = 0;
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
%nonassoc LOWER_THAN_ELSE TSEMICOLON
%nonassoc TELSE TBRAMR

%%
mini_c 				: translation_unit
					;
translation_unit 	: external_dcl		
					| translation_unit external_dcl
					;
external_dcl 		: function_def	//함수 : 함수헤더+중괄호
		  			| declaration	//선언 (전역변수 선언)
					| error TSEMICOLON {yyerrok; cErrors++; printExternalDeclarationErrSemi();}		// external_dcl에서 문제가 생겼을 때 에러 출력
					| error TBRAMR {yyerrok; cErrors++; printExternalDeclarationErrBracket();}		// external_dcl에서 문제가 생겼을 때 에러 출력
					;
function_def 		: function_header compound_st	//함수 헤더 +  중괄호
					| error compound_st {yyerrok; cErrors++; printNoFuncHeader();}		// 함수 헤더가 없을 때 에러 출력
					| function_header error {yyerrok; cErrors++; printNoFuncCompound_st();}		// 함수에서 중괄호 부분이 없을 때 에러 출력
					;
function_header 	: dcl_spec function_name formal_param {type = NONTYPE;}	//리턴타입	함수이름	소괄호&파라미터
					;
dcl_spec 			: dcl_specifiers
					;
dcl_specifiers 		: dcl_specifier					// ex) int, float, void
		 			| dcl_specifiers dcl_specifier // ex) const int, const float
					;
dcl_specifier 		: type_qualifier		//const
					| type_specifier		//int, float, void
					;
type_qualifier 		: TCONST	{check_const = 1; } 
					;
type_specifier 		: TINT 		{current_data_type = INTEGER;}
					| TFLOAT 	{current_data_type = FLOAT;}					
		 			| TVOID		{current_data_type = VOID;}
					;

//함수 이름
function_name 		: TIDENT 	{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;}
					;

//함수 선언부의 파라미터
formal_param 		: TBRASL opt_formal_param TBRASR    //( 파라미터 )
					| TBRASL opt_formal_param error {yyerrok; cErrors++; printNoRoundBracket();}	//닫는 소괄호 없는 에러 출력
					;
opt_formal_param 	: formal_param_list	 // 함수 인자들
					|
					;
formal_param_list 	: param_dcl {current_data_type = NONTYPE; check_const = 0;}		//인자 1개
		    		| formal_param_list TCOMMA param_dcl	//인자 여러개 와야할 때
					;
param_dcl 			: dcl_spec declarator  	// ex) int a, float aa[]
					;


//중괄호 scope					
compound_st 		: TBRAML opt_dcl_list opt_stat_list TBRAMR
					| TBRAML opt_dcl_list opt_stat_list error {yyerrok; cErrors++; printNoCurlyBracket();}	//닫는 중괄호 없는 에러 출력
					;
opt_dcl_list 		: declaration_list		//선언 여러문장
					|
					;
declaration_list 	: declaration			// 선언 + 세미콜론
					| declaration_list declaration // 선언이 여러 문장
	 				;
declaration 		: dcl_spec init_dcl_list TSEMICOLON	{current_data_type = NONTYPE; check_const = 0;}		//자료형 + 변수 + 세미콜론
					| dcl_spec init_dcl_list error {yyerrok; cErrors++; printNoSemicolon(); }	//세미콜론 없는 에러 출력
					;
init_dcl_list 		: init_declarator			//변수 1개
					| init_dcl_list TCOMMA init_declarator 	//변수 여러개
					;
init_declarator 	: declarator		//변수		
		 			| declarator TASSIGN TNUMBER   	// ex) num=12
					| declarator TASSIGN TRNUMBER	// ex) aa[3]=1.34
					;
declarator 			: TIDENT {  // 스칼라
						idEntry->subtype = SCALAR;
						idEntry->datatype = current_data_type;
						if(type == FUNCTION){ // 스칼라 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 스칼라 변수
							idEntry->maintype = VARIABLE;
							idEntry->is_const = check_const;
						}
					}					
	     			| TIDENT TBRALL opt_number TBRALR{  // 배열
						idEntry->subtype = ARRAY;
						idEntry->datatype = current_data_type;
						if(type == FUNCTION){ // 배열 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 배열 변수
						  idEntry->maintype = VARIABLE;
						} // 배열
					}
					| TIDENT TBRALL opt_number error {yyerrok; cErrors++; printNoSquareBracket();}	//닫는 대괄호 없는 에러 출력
					;
opt_number 			: TNUMBER	//정수
					| TRNUMBER 	//실수
					|			
					;

//선언부 이후...
opt_stat_list 		: statement_list
					|				
					;
statement_list 		: statement		//문장 한개		
		 			| statement_list statement	//여러개
	 				;
statement 			: compound_st		//중괄호로 묶이는 부분	
	   				| expression_st		// 수식;
	   				| if_st				//if() + statement	
	   				| while_st			//while() + statement
	   				| return_st			//return a ;
					;
expression_st 		: opt_expression TSEMICOLON		//모든 수식 + 세미콜론
					| expression error {yyerrok; cErrors++; printNoSemicolon();}	//세미콜론 없는 에러 출력
					;
opt_expression 		: expression		//모든 수식
					|				
					;
if_st 				: TIF TBRASL expression TBRASR statement %prec LOWER_THAN_ELSE	
					| TIF TBRASL expression TBRASR statement TELSE statement
		 			;
while_st 			: TWHILE TBRASL expression TBRASR statement 
			 		;
return_st 			: TRETURN opt_expression TSEMICOLON
					| TRETURN opt_expression error {yyerrok; cErrors++; printNoSemicolon();}	//세미콜론 없는 에러 출력
					;
expression 			: assignment_exp		//모든 수식
					;
assignment_exp 		: logical_or_exp			
					| unary_exp TASSIGN assignment_exp 		// 대입
					| unary_exp TADDASSIGN assignment_exp 	// +=
					| unary_exp TSUBASSIGN assignment_exp 	// -=
					| unary_exp TMULASSIGN assignment_exp 	// *=
					| unary_exp TDIVASSIGN assignment_exp 	// /=
					| unary_exp TMODASSIGN assignment_exp	// %=
					;
logical_or_exp 		: logical_and_exp			
					| logical_or_exp TOR logical_and_exp	// ||
		 			;
logical_and_exp 	: equality_exp				
		 			| logical_and_exp TAND equality_exp  	// &&
		 			;
equality_exp 		: relational_exp			
					| equality_exp TEQUAL relational_exp 	// ex) a>a+b  ==  a+b>a+b
					| equality_exp TNOTEQU relational_exp
		 			;
relational_exp 		: additive_exp 			
					| relational_exp TGREAT additive_exp 	// ex) a> a+b
					| relational_exp TLESS additive_exp 	// ex) a+b < a+b
					| relational_exp TGREATE additive_exp 	
					| relational_exp TLESSE additive_exp
		 			;
additive_exp 		: multiplicative_exp			
					| additive_exp TADD multiplicative_exp 	// ex) a+b
					| additive_exp TSUB multiplicative_exp	// ex) a-b
		 			;
multiplicative_exp 	: unary_exp				
		    		| multiplicative_exp TMUL unary_exp 	// ex) a* b
		    		| multiplicative_exp TDIV unary_exp 	// ex) (a++) / b
		    		| multiplicative_exp TMOD unary_exp		// ex) (a+b) % b
				 	;
unary_exp 			: postfix_exp				
	   				| TSUB unary_exp // 마이너스 		
	   				| TNOT unary_exp				
	   				| TINC unary_exp			
	   				| TDEC unary_exp
					;
postfix_exp 		: primary_exp	// 변수, 숫자, 소괄호로 묶인거			
	      			| postfix_exp TBRALL expression TBRALR 	// 배열 a[i+2]
	      			| postfix_exp TBRALL expression error {yyerrok; cErrors++;printNoSquareBracket()} 	//닫는 대괄호 없는 에러 출력
					| postfix_exp TBRASL opt_actual_param TBRASR // 함수 파라미터 여러개 ()	 // ex) read(a,b,c); 
	      			| postfix_exp TBRASL opt_actual_param error {yyerrok; cErrors++; printNoRoundBracket();}	//닫는 소괄호 없는 에러 출력
					| postfix_exp TINC	// ++		
	      			| postfix_exp TDEC  // --
					;
opt_actual_param 	: actual_param							
					;

//호출부에 있는 파라미터 (선언부 X)
actual_param 		: actual_param_list		//인자 있는거
					|						//인자 없는거
					;
actual_param_list 	: assignment_exp	// 파라미터 한개		
		   			| actual_param_list TCOMMA assignment_exp // 파라미터 여러개
					;
primary_exp 		: TIDENT					//변수
	     			| TNUMBER					//정수
					| TRNUMBER					//실수
	     			| TBRASL expression TBRASR	//소괄호에 묶인거
					| TBRASL expression error {yyerrok; cErrors++; printNoRoundBracket();}	//닫는 소괄호 없는 에러 출력
					;
%%
