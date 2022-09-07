#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("ENTRER LE PREMIER NEMBRE (A): ");
    scanf("%d",&a);
    printf("ENTRER LE DEUXIEME NEMBRE (B): ");
    scanf("%d",&b);
    int c,d,e,g;
    float f;
    c=a+b;
    d= a-b;
    e= a*b;
    f= a/b;
    g= a%b ;
    printf("\nla somme des deux nombres A et B est %d  ", c);
    printf("\nla differences entre les deux nombres A et B est %d  ", d);
    printf("\nle produit des deux nombres A et B est %d  ", e);
    printf("\nle quotient de la division des deux nombres A et B est %f  ", f);
    printf("\nle reste de la division des deux nombres A et B est %d  ", g);


    return 0;
}
