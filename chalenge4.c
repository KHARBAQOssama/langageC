#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, result;
    printf("ENTRER LA DISTANCE EN KM : ");
    scanf("%f",&km);
    result = km*0.621371 ;
    printf( "\n\n%f km= %f mile",km,result );

    return 0;
}
