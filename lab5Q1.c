#include <stdio.h> 

int main()
{
    int vehicle, hours, member;
    float fee = 0.0f, discount = 0.0f, final_fee;

    printf("Enter the vehicle type:\n1=bike\n2=car\n3=truck\n");
    scanf("%d", &vehicle);

    if (vehicle < 1 || vehicle > 3)
    {
        printf("Invalid vehicle\n");
        return 1;
    }

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    if (hours <= 0)
    {
        printf("Invalid hours\n");
        return 1;
    }

    printf("Are u a member? 1 for yes 0 for no: ");
    scanf("%d", &member);

    // Calculate base fee
    if (vehicle == 1)
    {
        fee = 20 * hours;
    }
    else if (vehicle == 2)
    {
        if (hours <= 2)
        {
            fee = 50 * hours;
        }
        else
        {
            fee = (2 * 50) + 30 * (hours - 2);
        }
    }
    else if (vehicle == 3)
    {
        if (hours <= 3)
        {
            fee = 100;
        }
        else
        {
            fee = 100 + 50 * (hours - 3);
        }
    }

    // Apply membership discount
    if (member == 1 && fee > 200)
    {
        discount = 0.15f;
    }

    final_fee = fee - (fee * discount);

    printf("Base fee: $%.2f\n", fee);
    printf("Discount: $%.2f\n", fee * discount);
    printf("Your final fee is: $%.2f\n", final_fee);

    return 0;
}