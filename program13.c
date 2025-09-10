#include<stdio.h>  //13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD. 
int main()
{
    int a;

    printf("Enter Your Number = "); 
    scanf("%d",&a);

    if(a%2==0)
    {

        printf(" Your Number is Even "); 
   
    }

    else
    {
        printf(" Your Number Is Odd "); 
    
    }

    return 0;
}