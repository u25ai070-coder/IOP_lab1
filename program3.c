#include<stdio.h>  //this is prog for gross salary
int main()
{
    int basic_in,rental_in,bonus_in,other_in; //where in stands for income 

    printf("Enter your Basic income : " );
    scanf("%d",&basic_in);

    printf("Enter your Rental allowence : ");
    scanf("%d",&rental_in);

    printf("Enter your Bonuse income : ");
    scanf("%d",&bonus_in);

    printf("Enter your other income : ");
    scanf("%d",&other_in);

    printf("Your gross income is : %d",basic_in+rental_in+bonus_in+other_in);

    return 0;
}