#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mille, result;
    printf("ENTRER LA DISTANCE EN MILLE : ");
    scanf("%f",&mille);
    result = mille*1.60934 ;
    printf( "\n\n%f M= %f KM",mille,result );

    return 0;
}

