#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("ENTRER LA TEMPERATURE EN �c : ");
    scanf("%f",&C);

    if (C<= 0){
        printf("la temp�rature est tr�s froid ");
    }

     else if (C> 0 && C<= 15){
        printf("la temp�rature est froid ");
    }
    else if (C>15 && C<= 25 ){
        printf("la temp�rature est chaud ");
    }
    else if (C>25  ){
        printf("la temp�rature est tr�s chaud ");
    }

    return 0;
}
