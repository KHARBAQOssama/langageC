#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("ENTRER LE PREMIER NEMBRE (A): ");
    scanf("%f",&a);
    printf("ENTRER LE DEUXIEME NEMBRE (B): ");
    scanf("%f",&b);
    printf("ENTRER LE TROISIEME NEMBRE (C): ");
    scanf("%f",&c);
    float somme = (a+b+c);
    float moyenne = somme/3;
    printf( "Somme =%f \nMoyenne = %f",somme, moyenne );



    return 0;
}
