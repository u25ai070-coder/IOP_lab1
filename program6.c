#include<stdio.h> //this is prog to swap two var without third var
int main()
{
    int a,b;

    printf("Enter Value for Variable A = " );
    scanf("%d",&a);

    printf("Enter Value for Variable B = " );
    scanf("%d",&b);

    a=b+a;
    b=a-b;
    
    printf("Value of A = %d\n", a-b);
    printf("Value of B = %d", b);

    return 0;
}