%{

#include <math.h>

%}

RHMATA [D][i][n][e][t][a][i]

TETRAGWNO [t][e][t][r][a][g][w][n][o]

TRIGWNO [t][r][i][g][w][n][o]

GWNIA [g][w][n][i][a]

%%

{RHMATA} { printf( " ena rhma :  %s\n", yytext );

}

{TETRAGWNO}|{TRIGWNO}|{GWNIA} { printf( "mia geometrikh ontothta : %s\n", yytext );

}

[A]|[B]|[C]|[D]|[E] { printf( "ena onoma geometrikhs ontothtas: %s\n" ,yytext);

}

[A-E]{2} { printf( " " );

}

[A-E]{3,4} { printf( "ena onoma geometrikhs ontothtas : %s\n" ,yytext);

}

[A-E]*[F-Z]+[A-E]* { printf( " " );

}

.

%%

main()

{

yylex();

}