#include<stdio.h>  
int main() /* this is peog for simple interest*/
{
    
    float r,a,p,t,b;

    printf("enter your amount= "); 
    scanf("%f",&p);

    printf("your interest rate = "); 
    scanf("%f",&r);

    printf("aquaring for time period of= ");
    scanf("%f",&t);
     
    a=p*r*t;
    b=a/100;
    printf("Your intrest is= %f",b);

    return 0;
}