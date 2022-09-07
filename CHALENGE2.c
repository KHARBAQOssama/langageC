#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    printf("ENTRER LA TEMPERATURE EN FAHRENHEIT : ");
    scanf("%d",&fahrenheit);
    int result = (fahrenheit-32)* 5/9 ;
    printf( "%d F= %d c",fahrenheit,result );

    return 0;
}
