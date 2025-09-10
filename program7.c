#include<stdio.h> //this program is for calculating area of a triangle
int main()
{
    float b,h,a;                      //base=b, h=hight, area=a

    printf("Enter Triangle's Base Length "); 
    scanf("%f",&b);

    printf("Enter Triangle's Hight "); 
    scanf("%f",&h);

    a=b*h/2;

    printf("Are of Triangle is=  %f",a); 
    
    return 0;
}
