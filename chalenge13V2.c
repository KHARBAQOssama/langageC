#include <stdio.h>
#include <stdlib.h>


int main (){
    int nombre;
    printf ("entrer le nombre en decimal :");
    scanf ( "%d",&nombre);
    int oct4,oct3,oct2,oct;
    oct4=nombre%8;
    oct= nombre/8;
    oct3=oct%8;
    oct=oct/8;
    oct2=oct%8;
    printf ("%d en octal est %d%d%d ", nombre,oct2,oct3,oct4 );



    return 0;
}

