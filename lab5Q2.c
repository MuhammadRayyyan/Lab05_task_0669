#include <stdio.h>
int main ()
{
    float marks,attendance,income;
        scanf("%f" , &marks);
        scanf("%f" , &attendance);
        scanf("%f" , &income);
    if (marks<50)
    {
    printf("Not elgible.. marks too low");
    }
    else if (attendance<75)
    {
       printf("Not elgible.. attendance too low");
    }
    else if (income>800000)
    {
         printf("Not elgible.. income too high");
    }
    else
    {
        if (marks>=90 && attendance>=90)
        {
         printf("Full scholarship");
        }
        else if (marks>=75 && attendance>=85)
        {
            printf("Half scholarship");
        }
        else
        {
            printf("Quarter scholarship");
        }
        
        
    }


    
    


    return 0;
}