#include<stdio.h>  //15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION. 
int main()
{
    int m,c,p,comp,e,t;
    float per;  

    printf("Enter YOUR MATHS MARK = "); 
    scanf(" %d",&m);

    printf("Enter YOUR CHEMISTRY MARK = "); 
    scanf(" %d",&c);

    printf("Enter YOUR PHYSICS MARK = "); 
    scanf(" %d",&p);

    printf("Enter YOUR  ENGLISH MARK = "); 
    scanf(" %d",&e);

    printf("Enter YOUR COMPUTER MARK = "); 
    scanf(" %d",&comp);

    t=m+c+comp+e+p;
    per=t/5;

    printf("Your Total Marks Are = %d \n",t);
    printf("Your Percentages Are = %f \n",per);
    if(per>=90)
    {
        printf(" YOU GOT A GRADE \n");
    }
    else if(per>=80 && per<90)
    {
        printf(" YOU GOT  B GRADE \n");
    }
    else if(per>70 && per<=80)
    {
        printf(" YOU GOT C GRADE \n");
    }
    else if(per>60 && per<=70)
    {
        printf(" YOU GOT D  GRADE \n");
    }
    else if(per>50 && per<=60)
    {
        printf(" YOU GOT E GRADE \n");
    }
    else
    {
        printf(" YOU GOT F GRADE \n");
    }


    return 0;
}