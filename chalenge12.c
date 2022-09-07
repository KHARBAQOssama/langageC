#include <stdio.h>
#include <stdlib.h>

    int main ()
    {
        int num, NumR;

		printf("entrer le nombre entier à trois chiffres  ");
		scanf("%d",&num);

		printf("aprés reverse le nombre est : ");
		NumR = num%10;
		printf("%d",NumR);
		NumR = num/10;
		NumR = NumR%10;
		printf("%d",NumR);
		NumR = num/100;
		printf("%d",NumR);



    return 0;
}
