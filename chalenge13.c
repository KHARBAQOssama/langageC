#include <stdio.h>
#include <stdlib.h>


int main (){
    int nombre;
    printf ("entrer le nombre en decimal :");
    scanf ( "%d",&nombre);
    printf ("votre nombre en octal est %o",nombre);
    printf ("\nvotre nombre en hexadecimal est %X",nombre);


    return 0;
}
