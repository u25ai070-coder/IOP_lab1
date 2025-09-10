#include<stdio.h> //tthis is code for swaping integer values 
int main()
{
   int a,b,c;

    printf("Enter Value for Variable A = " );
    scanf("%d",&a);

    printf("Enter Value for Variable B = " );
    scanf("%d",&b);

    c=a;  /*like game of three test tube one is empty and two are full*/
    a=b;
    b=c;

    printf("Value of A= %d\n", a );
    printf("Value of B= %d", b);
 
    return 0;
}