﻿%{

#include <math.h>

/* unvariable used in case that someone gives as input variable starting of numbers which is wrong */

%}

DIGIT [0-9]

VARIABLE [a-z]["_"]*[a-z0-9]* 

KEYWORD [var]

UNVARIABLE [0-9]+["_"]*[a-z]+["_"]*

%%

var{1} {

printf( "A keyword: %s \n", yytext );

}

{UNVARIABLE}* {printf(" ");

}

integer|real|boolean|char {

printf( "A type of variable: %s\n", yytext );

}

{VARIABLE}+ {

printf( "A variable: %s \n", yytext );

}

[:]|[;] {printf("Point: %s \n",yytext);

}

.

%%

main()

{
yylex();

}