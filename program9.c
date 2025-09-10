#include<stdio.h> //9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND. 
int main()
{
    int h,m,s,t;

    printf("ENTER HOURS = " );
    scanf("%d",&h);
    
    printf("ENTER MINUTES = " );
    scanf("%d",&m);

    printf("ENTER SECONDS = " );
    scanf("%d",&s);

    t=h*3600+m*60+s;

    printf("TOTAL SECOND ARE = %d",t );
    

    return 0;
}