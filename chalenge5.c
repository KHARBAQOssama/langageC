#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    printf("ENTRER LA TEMPERATURE EN FAHRENHEIT : ");
    scanf("%f",&F);
    float C = (F-32)/1.8 ;
    printf( "%f F= %f c",F,C );

    return 0;
}
