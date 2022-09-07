#include <stdio.h>
#include <stdlib.h>
 #include <math.h>
int main()
{
    float X1,Y1,X2,Y2;
    printf("les coordonnées de la point M \n ");
    printf("entrer xM\n");
    scanf("%f",&X1);
    printf("entrer yM\n");
    scanf("%f",&Y1);

    printf("les coordonnées de la point N \n");
    printf("entrer xN\n");
    scanf("%f",&X2);
    printf("entrer yN\n");
    scanf("%f",&Y2);

    float MN = sqrt((X2-X1)*(X2-X1)+ (Y2-Y1)*(Y2-Y1)) ;

    printf ("la distance entre M (%f,%f) et N (%f,%f) est %f",X1,Y1,X2,Y2,MN);




    return 0;
}
