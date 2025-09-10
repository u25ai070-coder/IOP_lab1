#include<stdio.h>  /* EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C 
                    PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES */
int  main()
{

    float t,d,h,m; // t=time d=day h=hour m=minute
    t=31558150;

    m=t/60;
    h=m/60;
    d=h/24;
    
    printf("DAYS = %f\n\n", d );
   

    printf("HOURS = %f\n\n", h);
    

    printf("MINUTES= %f\n\n", m );
    
    
    

    return 0;
}