#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    printf("ENTRER LA TEMPERATURE EN FAHRENHEIT : ");
    scanf("%f",&fahrenheit);
    float result = (fahrenheit-32)* 5/9 ;
    printf( "%f F= %f c",fahrenheit,result );

    return 0;
}
