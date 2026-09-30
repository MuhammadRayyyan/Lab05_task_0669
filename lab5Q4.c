#include <stdio.h>
int main ()
{
    int card_status , pin ;
    int acc_balance , withdrawal ;
    
    printf("Enter card status (1 = valid, 0 = blocked): ");
    scanf("%d", &card_status);

    printf("Enter PIN correctness (1 = correct, 0 = wrong): ");
    scanf("%d", &pin);

    printf("Enter account balance: ");
    scanf("%d", &acc_balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if(card_status==0)
    {
        printf("Card blocked. contact bank");
    }
    else if(pin==0)
    {
        printf("Incorrect pin");
    }
    else if(withdrawal<=0)
    {
        printf("Invalid amount");
    }
    else if(withdrawal>acc_balance)
    {
        printf("Insufficient balance.\n");
    }
    else if(withdrawal>25000)
    {
        printf("Daily limit exceed");
    }
    else if((acc_balance - withdrawal)<1000)
    {
        printf("Min balance must be maintained");
    }
    else
    {
        // dispense cash
        int new_balance = acc_balance - withdrawal;
        int remaining = withdrawal;

        // break ur balance into notes of specific values(2000/500/100)
        int notes_2000= remaining/2000;  
        remaining = remaining%2000;

        int notes_500 = remaining/500;
        remaining = remaining%500;

        int notes_100 = remaining/100;
        remaining = remaining%100;

        printf("Your new balance is: %d" , new_balance);
        printf("2000 notes: %d\n", notes_2000);
        printf("500 notes: %d\n", notes_500);
        printf("100 notes: %d\n", notes_100);
        printf("Please collect your cash.\n");
    }

    return 0;
}