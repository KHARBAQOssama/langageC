#include <stdio.h>
#include <stdlib.h>

    int main ()
    {
        int num, NumR;

		printf("ENTER THE THREE DIGIT NUMBER:- ");
		scanf("%d",&num);

		printf("AFTER REVERSE RESULT IS:- ");
		NumR = num%10;
		printf("%d",NumR);
		NumR = num/10;
		NumR = NumR%10;
		printf("%d",NumR);
		NumR = num/100;
		printf("%d",NumR);



    return 0;
}
