%{
    /*
    * scanner.l - lexical analyzer for the MiniC
    * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
    * date - 
    */
    #include <stdio.h>
    #include "tn.h"
    #include "glob.h"
%}
A       [A-Za-z_]
D       [0-9]
NZEROD  [1-9]
%%
"const"         return(TCONST);
"else"          return(TELSE);
"if"            return(TIF);
"int"           return(TINT);
"return"        return(TRETURN);
"void"          return(TVOID);
"while"         return(TWHILE);

"+"             return(TADD);
"-"             return(TSUB);
"*"             return(TMUL);
"/"             return(TDIV);
"%"             return(TMOD);

"="             return(TASSIGN);
"+="            return(TADDASSIGN);
"-="            return(TSUBASSIGN);
"*="            return(TMULASSIGN);
"/="            return(TDIVASSIGN);
"%="            return(TMODASSIGN);

"!"             return(TNOT);
"&&"            return(TAND);
"||"            return(TOR);

"=="            return(TEQUAL);
"!="            return(TNOTEQU);
"<"             return(TLESS);
">"             return(TGREAT);
"<="            return(TLESSE);
">="            return(TGREATE);

"++"            return(TINC);
"--"            return(TDEC);

"("             return(TBRASL);
")"             return(TBRASR);
"{"             return(TBRAML);
"}"             return(TBRAMR);
"["             return(TBRALL);
"]"             return(TBRALR);
","             return(TCOMMA);
";"             return(TSEMICOLON);

" "             return(TBLANK);
"\t"            return(TTAB);
"\n"            {
                    return(TNEWLINE);
                }

{A}({A}|{D})*                   {
                                    if(yyleng > 12){
                                        err = longid;
                                        return(TERROR);
                                    }
                                    else{
                                        SymbolTable();
                                        return(TIDENT);
                                    }
                                }
{D}+                       return(TNUMBER);
{D}+"."{D}+                return(TRNUMBER);
"/*"([^*]|\*+[^*/])*\**"*/"     {
                                    int i;
                                    for(i = 0; i < yyleng; i++)
                                        if(yytext[i] == '\n') lineCount++;
                                } 
"//".*                          ;
[^ \t\n"//""/*"]+               return(TERROR);
%%
int yywrap()
{
    return 1;
}
