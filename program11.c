#include<stdio.h> //11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
int main()
{

    int t,h,m,s;  //t=total seconds h=hour m=minutes s=seconds

    printf("ENTER SEOCNDS = " );
    scanf("%d",&t);

    h=t/3600;
    m=t/60-h*60;
    s=t-h*3600;
    printf("TIME IS  = %d",h );
    printf(" HOURS ");
    
    printf("  %d",m );
    printf(" MINUTES " );

    printf("  %d",s );
    printf(" SECONDS " );
    
    
    return 0;
}