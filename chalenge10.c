#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _Pi 3.1415927

int main()
{
    float r;

    printf("entrer le rayon de votre cercle");
    scanf("%f",&r);
    float Pi=3.1415927;
    float c= 2*Pi*r;
    printf("la circonférence de votre cercle est : %f",c);


    return 0;
}
