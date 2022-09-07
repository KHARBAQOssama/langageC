#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("ENTRER LA TEMPERATURE EN C : ");
    scanf("%f",&C);
    float result = (C*1.8)+32 ;
    printf( "%f C= %f F",C,result );

    return 0;
}
