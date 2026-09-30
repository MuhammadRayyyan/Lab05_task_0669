#include <stdio.h>
int main ()
{
    int age, oxygen, heart_rate;
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter oxygen level (SpO2 %%): ");
    scanf("%d", &oxygen);

    printf("Enter heart rate (bpm): ");
    scanf("%d", &heart_rate);

    if (oxygen<90)
    {
        printf("Immidiate attention");
    }
    else if(heart_rate>130 || heart_rate<40)
    {
        printf("Crdiac Alert");
    }
    else if(age>=65 && oxygen<95)
    {
        printf("High priority");
    }
    else if(age<=5 && heart_rate>110)
    {
        printf("High priority");
    }
    else if(oxygen<97)
    {
         printf("Mid priority");
    }
    else
    {
        printf("Low priority");
    }
    return 0;
}