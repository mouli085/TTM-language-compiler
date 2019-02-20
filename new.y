%{

	#include<stdio.h>
	#include "node.c"
	#include<stdlib.h>
	#include<string.h>
	extern char * yytext;
	#include <math.h>
	#define var 180
    #define pi  3.1416
	double temp;
	double dfcheck;
	double swcheck;
	double brkflg;
%}
%union {
  double DOB;  
  char *str;
}
%token <DOB> NUM
%token <str> IDENTIFIER 
%token <str> STRING
%token <str> LIBNAME
%type <DOB> expr
%type <DOB> chckexp
%type <DOB> cases
%type <DOB> inc
%type <DOB> default
%type <DOB> statement
%type <DOB> cstatement
%type <str> id

%type <str> type
%type <DOB> con
%type <DOB> ret
%type <DOB> fmain
%type <DOB> loop

%token INT BREAK CONTINUE DEFINE DOUBLE FLOAT SHORT AUTO ELSE ELIF IF THEN WHILE GOTO RETURN FOR INCLUDE OR SWITCH CASE PRINT  PLUS MINUS MULT MOD EQUAL GREATERTHAN LESSTHAN ASSIGN NOTGREATERTHAN NOTLESSTHAN NOTEQUALEQUAL IN OUT  COMMENT GREATERTHANEQUAL LESSTHANEQUAL AND VOID CHAR DIV TOPEN TCLOSE FOPEN FCLOSE SOPEN SCLOSE COMMA COLON SEMI HASH BROPEN BRCLOSE INCR DECR DEFAULT POW FACT SINE COS TAN LN

%nonassoc IFX
%nonassoc ELSE
%left LESSTHAN GREATERTHAN LESSTHANEQUAL GREATERTHANEQUAL NOTLESSTHAN NOTGREATERTHAN
%left PLUS MINUS
%left MULT DIV
%left MOD
%left OR AND
/**/

/**/

%%
program: incl fmain {printf("program ended");}
	;

incl: HASH INCLUDE BROPEN LIBNAME BRCLOSE incl	{printf("%s is included",$4);}
	| /*empty*/
	;

fmain : type IDENTIFIER FOPEN param FCLOSE SOPEN cstatement ret SCLOSE	{	
			if(find($2) != 0){
				printf($2);
				printf("function name already Declared\n");
			}
			else
				{
				insert($2,0,1);
				}
			

			if($1=="VOID"&& isnan($8)!=1){
				printf("\nCAN NOT RETURN A VALUE\n");
				$$=NAN;
			}
			else if($1!="VOID"&& isnan($8)==1){
				printf("\nplease RETURN A VALUE\n");
			}
			else if($1!="VOID"&& isnan($8)!=1){
				printf("return %.10g\n",$8);
				$$=$8;
			}
			
			if(strcmp($2,"ttmMain")==0)
			{
			printf($2);
			printf(" compiled\n");
			}
		}
	   	;


type : INT 	{$$="INT";}
	 | FLOAT	{$$="FLOAT";}
	 | DOUBLE 	{$$="DOUBLE";}
	 | CHAR 	{$$="CHAR";}
	 | VOID 	{$$="VOID";}
	 ;

param : /*empty*/	
	  | type IDENTIFIER	{ 
				if(find($2) != 0){
				printf($2);
				printf(" variable already declared\n");}
				else
					{
					insert($2,0,0);
					}
					
				}
	  | param COMMA type IDENTIFIER { 
	  			
				if(find($4) != 0){
				printf($4);
				printf(" variable already declared\n");}
				else
					{
						insert($4,0,0);
					}
				}
	  ;

ret: /*empty*/ 	{$$=NAN;}
   | RETURN expr{$$=$2; }
	;

id: IDENTIFIER	{ 
	  			
				if(find($1) != 0){
				printf($1);
				printf(" variable already declared\n");}
				else
					{
					insert($1,0,0);
					}
					
				}
  | id COMMA IDENTIFIER	{ 
	  			
				if(find($3) != 0){
				printf($3);
				printf(" variable already declared\n");}
				else
					{
					insert($3,0,0);
					}
				}
  ;

cstatement: cstatement statement
	|/*empty*/
	
	| cstatement type id	{printf("\nvalid declaration\n");}
	;

statement : /*empty*/

		  | expr  { printf("\nvalue of expression : %.10g\n", $1); $$= $1 }

		  | IF expr THEN SOPEN statement SCLOSE %prec IFX{
	  			if($2){
					printf("\nvalue of expression in IF: %.10g\n",$5);
					$$=$5;
				}

				else{
					printf("condition value zero in IF block\n");
					$$=0;
				}
				
	  		}	
		  | IF expr THEN SOPEN statement SCLOSE ELSE SOPEN statement SCLOSE {
			 	if($2)
				{
					printf("value of expression in IF: %.10g\n",$5);
					$$= $5;
				}
				else
				{
					printf("value of expression in ELSE: %.10g\n",$9);
					$$=$9;
				}
		  }
		 
	      | loop

		  | SWITCH chckexp SOPEN cases default SCLOSE  {}

		  | IDENTIFIER FOPEN NUM FCLOSE 	{
		  	if(isfunction($1)==0){
		  		printf("%s is not a function\n",$1); 
		  	}
		  	else
		  	{
		  		printf("return value of %s %.10g\n",getvalue($1)); 
		  	}
		  }

		  | PRINT out {$$=1;printf("\n");}
		  

		  |COMMENT {printf("\ncomment ignored \n");}
		;


out: OUT expr {printf("printing expression: %.10g\n",$2);}
   | OUT STRING 	{printf("printing expression: %s\n",$2);}
   | out out

loop: FOR FOPEN IDENTIFIER ASSIGN NUM SEMI IDENTIFIER con NUM SEMI IDENTIFIER inc FCLOSE 
	 SOPEN statement SCLOSE		{

      	if(find($3) != 1){
		printf($3);
		printf(" variable not declared\n");
		}
		else if(find($7) != 1){
			printf($7);
			printf(" variable not declared\n");
		}
		else if(find($11) != 1){
			printf($11);
			printf(" variable not declared\n");
		}
		else
		{	if($12==55){
				if($8==1){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)<$9; change($11,getvalue($11)+1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
	        	}
		        else if($8==2){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)>$9; change($11,getvalue($11)+1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
		        else if($8==3){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)<=$9; change($11,getvalue($11)+1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
		        else if($8==4){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)>=$9; change($11,getvalue($11)+1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
			}
			else if($12==66){
				if($8==1){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)<$9; change($11,getvalue($11)-1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
	        	}
		        else if($8==2){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)>$9; change($11,getvalue($11)-1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
		        else if($8==3){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)<=$9; change($11,getvalue($11)-1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
		        else if($8==4){
			        printf("\nFOR LOOP:\n");
					for (change($3,$5) ; getvalue($7)>=$9; change($11,getvalue($11)-1) ){
						printf("expression in for loop : %.10g\n",$15);
					}
		        }
			}
			$$=$15;
		}
	}
	| WHILE FOPEN IDENTIFIER con NUM FCLOSE SOPEN statement IDENTIFIER inc SCLOSE	{
  		if(find($3) != 1){
			printf($3);
			printf(" variable not declared\n");
		}
		else if(find($9) != 1){
			printf($9);
			printf(" variable not declared\n");
		}
		else
		{	if($10==55){
				if($4 ==1)
				{
					while(getvalue($3)<$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)+1); 
	  				}
  				}
  				else if($4 ==2)
				{
					while(getvalue($3)>$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)+1);	 
	  				}
  				}
  				else if($4 ==3)
				{
					while(getvalue($3)<=$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)+1);	  					 
	  				}
  				}
  				else if($4 ==4)
				{
					while(getvalue($3)>=$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)+1);
	  				}
  				}
			}
			if($10==66){
				if($4 ==1)
				{
					while(getvalue($3)<$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)-1);
	  				}
  				}
  				else if($4 ==2)
				{
					while(getvalue($3)>$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)-1);
	  				}
  				}
  				else if($4 ==3)
				{
					while(getvalue($3)<=$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)-1);
	  				}
  				}
  				else if($4 ==4)
				{
					while(getvalue($3)>=$5){
	  					printf("expression in while loop:%.10g\n",$8);
	  					change($9,getvalue($9)-1);
	  				}
  				}
			}
		}
  	}
	;

chckexp: expr 	{$$=$1;swcheck=$1; dfcheck=0; brkflg=1 /*printf("\nin %.10g\n",$$);*/}
	;

default:/*empty*/
	   |DEFAULT COLON expr {if(dfcheck==0||brkflg==0){printf("value of expression in switch default: %.10g\n",$3);}}
	   ;

cases: /*empty*/
     | cases CASE NUM COLON expr break	{if(swcheck==$3||brkflg==0){
		  			printf("value of expression in switch case: %.10g\n",$5);
		  			dfcheck=1;
		  		}}
	;
	
break: /*empty*/	{ brkflg=0;}
	 | BREAK 	{ brkflg=1;}
	 ;


inc: INCR	{ $$= 55;}

   |DECR	{$$= 66;}
	;			


con: LESSTHAN 		{$$ = 1;}
   | GREATERTHAN 	{$$ = 2;}
   | LESSTHANEQUAL		{$$ = 3;}
   | GREATERTHANEQUAL 	{$$ = 4;}
   ;


expr: NUM	{ $$ = $1; }

	| IDENTIFIER	{
					//printf($1);
						if(find($1) != 1){
				printf($1);
				printf(" variable not declared\n");}
				else
				{
				//printf("\nvariable:");
				//printf($1);
				$$ = getvalue($1);

				}
					}		
	| IDENTIFIER ASSIGN expr	{ 
	  			if(find($1) != 1){
					printf($1);
					printf(" variable not declared\n");
				}
				else
				{
					change($1,$3);
					printf("\nValue of %s: %.10g\n",$1,$3);
				}	
				$$=getvalue($1);				
			}
	| expr PLUS expr	{ $$ = $1 + $3; }

	| expr MINUS expr	{ $$ = $1 - $3; }

	| expr MULT expr	{ $$ = $1 * $3; }

	| expr DIV expr	    {if($3) 
					  		{
					     			$$ = $1 / $3;
					  		}
				  		else
					  		{
								$$ = 0;
								printf("\ndivision by zero\t");
					  		} 

				    	}
	| expr FACT 	{
						int facto=1 ,i;
						for(i=$1;i>0;i--)
						{
							facto=facto*i;
						}
						$$=facto;
						 
					 }	
	| SINE FOPEN expr FCLOSE { $$=sin($3 * pi / var); printf(" sin value %.10g\n",$$); }
	| COS FOPEN expr FCLOSE { $$=cos($3 *pi / var); printf(" cos value %.10g\n",$$); }
	| TAN FOPEN expr FCLOSE { $$=tan($3 *pi / var); printf(" tan value %.10g\n",$$); }
	| LN  FOPEN expr FCLOSE { $$=log($3); printf(" ln value %.10g\n",$$); }
	| expr LESSTHAN expr	{ $$ = $1 < $3;}
	
	| expr GREATERTHAN expr	{ $$ = $1 > $3;}

	| expr LESSTHANEQUAL expr	{ $$ = $1 <= $3;}
	
	| expr GREATERTHANEQUAL expr	{ $$ = $1 >= $3;}
	
	| expr EQUAL expr	{ $$ = $1 == $3;}

	| FOPEN expr FCLOSE		{ $$ = $2;	}

	| expr POW expr	{$$ =pow($1,$3) ;/* printf("%.10g To the power %.10g value %.10g\n",$1,$3,$$);*/	}
	;

%%
int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}