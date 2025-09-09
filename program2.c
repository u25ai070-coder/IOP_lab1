#include<stdio.h>
int main()  /*this isrog for calculating total marks and %*/
{
    int a,b,c,d,e,t;
    float p;
    printf("Your first subject's mark= ");
    scanf("%d",&a);
    
    printf("Your second subject's mark= ");
    scanf("%d",&b);

    printf("Your third subject's mark= ");
    scanf("%d",&c);

    printf("Your fourth subject's mark= ");
    scanf("%d",&d);

    printf("Your fifth subject's mark= ");
    scanf("%d",&e);
    t=a+b+c+d+e;
    p=t/5;
    printf("\nYour Total marks are= %d",t);
    printf("\nYour Persentage are= %f",p);
    

    return 0;
}