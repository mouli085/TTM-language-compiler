%{
	#include <stdio.h>	
	#include "new.tab.h"
	#include <string.h>
	#include<stdlib.h>
	extern char *yy;
	extern float temp;

%}

%%
[ \t\n]*	;
[:].+[:]	{return COMMENT;}
"mINT"		{return INT;}
"mBREAK"	{return BREAK;}
"mCONTINUE"	{return CONTINUE;}
"mDEF"		{return DEFINE;}
"mDOUBLE"	{return DOUBLE;}
"mFLOAT"	{return FLOAT;}
"mSHORT"	{return SHORT;}
"mAUTO"		{return AUTO;}
"mCHAR"		{return CHAR;}
"mVOID"		{return VOID;}
"mELSE"		{return ELSE;}
"mELIF"		{return ELIF;}
"mIF"		{return IF;}	
"mTHEN"		{return THEN;}
"mWHILE"	{return WHILE;}
"mGOTO"		{return GOTO;}
"mRET"		{return RETURN;}
"mFOR"		{return FOR;}
"mINCL"		{return INCLUDE;}
"mSWITCH"	{return SWITCH;}
"mCASE"		{return CASE;}
"mDEFAULT"	{return DEFAULT;}
"mSINE"		{return SINE;}
"mCOS"		{return COS;}
"mTAN"		{return TAN;}
"mLN"		{return LN;}
"ttmPrint"	{return PRINT;}
[a-z]+".t"	{ yylval.str = strdup(yytext);return LIBNAME;}
"ttm"[A-Z][a-z0-9_$]*	{ yylval.str = strdup(yytext);	return IDENTIFIER;}
"o+"	{return PLUS;}
"o-"	{return MINUS;}
"o++"	{return INCR;}
"o--"	{return DECR;}
"o*"	{return MULT;}
"o/"	{return DIV;}
"o%"	{return MOD;}
"o="	{return ASSIGN;}
"o!"	{return FACT;}
"o>"	{return GREATERTHAN;}
"o<"	{return LESSTHAN;}
"o=="	{return EQUAL;}
"o!>"	{return NOTGREATERTHAN;}
"o!<"	{return NOTLESSTHAN;}
"o!="	{return NOTEQUALEQUAL;}
"o>="	{return GREATERTHANEQUAL;}
"o<="	{return LESSTHANEQUAL;}
"o&&"	{return AND;}
"o!!"	{return OR;}
"o^"	{return POW;}

"!>>"	{return IN;}
"!<<"	{return OUT;}
"!["	{return TOPEN;}
"!]"	{return TCLOSE;}	
"!("	{return FOPEN;}
"!)"	{return FCLOSE;}
"!{"	{return SOPEN;}
"!}"	{return SCLOSE;}
"!,"	{return COMMA;}
"!:"	{return COLON;}
"!;"	{return SEMI;}
"!#"	{return HASH;}
"!<"	{return BROPEN;}
"!>"	{return BRCLOSE;}
[+-]?[0-9]+|[+-]?[0-9]*"."[0-9]+|[1-9]+e[+-][0-9]+		{yylval.DOB = atof(yytext);return NUM;}
["].+["]	{yylval.str = strdup(yytext);return STRING;}


.	{
		yyerror("Unknown Character.\n");
	}
%%



int main(void){
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
	return 0;
	
}