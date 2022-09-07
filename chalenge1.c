#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20] ;
    char lname[20];
    int  age ;
    char gender[20];
    char phonenm[20];
    printf("entre your first name ");
    scanf("%s",fname);
    printf("entre your last name ");
    scanf("%s",lname);
    printf("entre your age ");
    scanf("%d", &age);
    printf("are you male or female ");
    scanf("%s",gender);
    printf("entre your phone number ");
    scanf("%s",phonenm);
    printf ( "your first name is : %s ", fname );
    printf ( "\nyour last name is : %s ", lname );
    printf ( "\nyou are %d years old ", age );
    printf ( "\nyou are %s ", gender );
    printf ( "\nyour phone number is : %s ", phonenm );

    return 0;
}
