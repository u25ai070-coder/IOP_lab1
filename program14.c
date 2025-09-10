#include<stdio.h> /*14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.*/
int main()
{
    char a;
    

    printf("Enter ANY CHARACTER = "); 
    scanf(" %c",&a);

     
    

    if(65<=a && a<=90)
    {
        printf(" Your Character Is A Capital Case Letter \n");
    }
    else if(97<=a && a<=122)
    {
        printf(" Your Character Is A Small Case Letter \n");
    }
    else if(48<=a && a<=57)
    {
        printf(" Your Character Is A Digit \n");
    }
    else
    {
        printf(" Your Character Is A Spacial Symbol \n");
    }
    

    return 0;
}