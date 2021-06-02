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
external_dcl 		: function_def
		  			| declaration
					//| error TSEMICOLON 	{yyerrok; cErrors++; printExternalDeclarationErrSemi();}		// external_dcl에서 문제가 생겼을 때 에러 출력
					//| error TBRAMR 		{yyerrok; cErrors++; printExternalDeclarationErrBracket();}		// external_dcl에서 문제가 생겼을 때 에러 출력
					;
function_def 		: function_header compound_st
					| error compound_st		 		{yyerrok; cErrors++; printInvalidFuncHeader();}		 // 함수 헤더가 잘못된 경우 에러 출력
					| function_header error 		{yyerrok; cErrors++; printInvalidFuncCompound_st();}	 // 함수에서 중괄호 부분이 잘못된 경우 에러 출력
					;
function_header 	: dcl_spec function_name formal_param {type = NONTYPE;}	// 함수 헤더 완료 -> 타입 초기화
					;
dcl_spec 			: dcl_specifiers
					;
dcl_specifiers 		: dcl_specifier					
		 			| dcl_specifiers dcl_specifier
					;
dcl_specifier 		: type_qualifier
					| type_specifier
					;
type_qualifier 		: TCONST	{check_const = 1; } 			// const 여부 저장
					;
type_specifier 		: TINT 		{current_data_type = INTEGER;}	// 정수형 저장
					| TFLOAT 	{current_data_type = FLOAT;}	// 실수형 저장	
		 			| TVOID		{current_data_type = VOID;}		// void형 저장
					;

//함수 이름
function_name 		: TIDENT 	{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;}		// 함수 타입, 리턴 타입 저장
					;

//함수 선언부의 파라미터
formal_param 		: TBRASL opt_formal_param TBRASR
					| TBRASL opt_formal_param error 	{yyerrok; cErrors++; printNoRoundBracket();}	//닫는 소괄호 없는 에러 출력
					//컴마를 살리던가 소괄호를 살리던가
					;
opt_formal_param 	: formal_param_list	 // 함수 인자들
					|
					;
formal_param_list 	: param_dcl 	{current_data_type = NONTYPE; check_const = 0;}		// 파라미터 선언 종료 -> 자료형, const 여부 초기화
		    		| formal_param_list TCOMMA param_dcl
					| formal_param_list  param_dcl error {yyerrok; cErrors++; printNoComma(); }
					;
param_dcl 			: dcl_spec declarator 
					;


//중괄호 scope					
compound_st 		: TBRAML opt_dcl_list opt_stat_list TBRAMR
					| TBRAML opt_dcl_list opt_stat_list error 	{yyerrok; cErrors++; printNoCurlyBracket();}	//닫는 중괄호 없는 에러 출력
					;
opt_dcl_list 		: declaration_list
					|
					;
declaration_list 	: declaration			
					| declaration_list declaration
	 				;
declaration 		: dcl_spec init_dcl_list TSEMICOLON		{current_data_type = NONTYPE; check_const = 0;}		// 선언 종료 -> 자료형, const 여부 초기화
					| dcl_spec init_dcl_list error  {yyerrok; cErrors++; printNoSemicolon(); }			//세미콜론 없는 에러 출력
					//컴마를 살리던가 세미콜론을 살리던가
					;
init_dcl_list 		: init_declarator			
					| init_dcl_list TCOMMA init_declarator
					| init_dcl_list init_declarator error {yyerrok; cErrors++; printNoComma(); }  // <<<<여기 컴마 오류
					;
init_declarator 	: declarator	
		 			| declarator TASSIGN TNUMBER   
					| declarator TASSIGN TRNUMBER	
					;
declarator 			: TIDENT // 스칼라
					{  
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
	     			| TIDENT TBRALL opt_number TBRALR	// 배열
					{
						idEntry->subtype = ARRAY;
						idEntry->datatype = current_data_type;

						if(type == FUNCTION){ // 배열 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 배열 변수
						  idEntry->maintype = VARIABLE;
						}
					}
					| TIDENT TBRALL opt_number error 	{yyerrok; cErrors++; printNoSquareBracket();}	// 닫는 대괄호 없는 에러 출력
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
					| expression error 			{yyerrok; cErrors++; printNoSemicolon();}	//세미콜론 없는 에러 출력
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
					| TRETURN opt_expression error 		{yyerrok; cErrors++; printNoSemicolon();}	//세미콜론 없는 에러 출력
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
	   				| TSUB unary_exp 
	   				| TNOT unary_exp				
	   				| TINC unary_exp			
	   				| TDEC unary_exp
					;
postfix_exp 		: primary_exp	
	      			| postfix_exp TBRALL expression TBRALR 	
	      			| postfix_exp TBRALL expression error 		{yyerrok; cErrors++;printNoSquareBracket()} 	//닫는 대괄호 없는 에러 출력
					| postfix_exp TBRASL opt_actual_param TBRASR 
	      			| postfix_exp TBRASL opt_actual_param error {yyerrok; cErrors++; printNoRoundBracket();}	//닫는 소괄호 없는 에러 출력
					//밑의 컴마를 살리던가 소괄호를 살리던가
					| postfix_exp TINC	
	      			| postfix_exp TDEC
					;
opt_actual_param 	: actual_param							
					;
actual_param 		: actual_param_list	
					|					
					;
actual_param_list 	: assignment_exp		
		   			| actual_param_list TCOMMA assignment_exp 
					//| actual_param_list error assignment_exp {yyerrok; cErrors++; printf("No comma\n"); }
					;
primary_exp 		: TIDENT					
	     			| TNUMBER					
					| TRNUMBER					
	     			| TBRASL expression TBRASR	
					| TBRASL expression error 	{yyerrok; cErrors++; printNoRoundBracket();}	// 닫는 소괄호 없는 에러 출력
					;
%%
