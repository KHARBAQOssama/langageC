#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _Pi 3.1415927

int main()
{
    float loong,larg;

    printf("entrer la longeur de votre rectangle ");
    scanf("%f",&loong);
    printf("entrer la largeur de votre rectangle");
    scanf("%f",&larg);
    float c= 2*(loong+larg);
    printf("la circonférence de votre rectangle est : %f",c);


    return 0;
}
