#include<stdio.h> //prog for converting Ferenhiet ti centigrade degreee
int main()
{
    float f,c,a; // f stands for Ferenhiet and c stands for centigrade degree a is intermideat

    printf("Enter Your Ferenhiet temprature : " );
    scanf("%f",&f);

    a=f-32;
    c=a*5;
    printf("Enter Your Celcius temprature is : %f",c/9 );

    return 0;
}