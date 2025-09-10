#include<stdio.h> /*10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE 
                        FORMULA. 
                        CM = M/2+P/2+C/2+E 
                        WHERE CM = Cut of f mark 
                        M = Marks in Mathematics out of 200 
                        P = Marks in Physics out of 200 
                        C = Marks in Chemistry out of 200 
                        E = Marks in entrance examination out of 100 */
int main()
{
    float m,c,p,e,CM; // m= maths p=physics c=chemistry e=entrace exam's mark.
    printf("ENTER YOUR MATHS MARKS OUT OF 200 = " );
    scanf("%f",&m);
    
    
    printf("ENTER YOUR PHYSICS MARKS  OUT OF 200 = " );
    scanf("%f",&p);

    printf("ENTER YOUR CHEMISTRY MARKS OUT OF 200 = " );
    scanf("%f",&c);

    printf("ENTER YOUR ENTRANCE EXAMINATION MARKS OUT OF 100 = " );
    scanf("%f",&e);

    CM=m/2+p/2+c/2+e;

    printf("YOUR CUTOFF MARKS ARE = %f",CM );

    return 0;
}