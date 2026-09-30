#include <stdio.h>
int main ()
{
    int category,subtype,delayed;
  printf("Choose Category:\n");
    printf("1 = Greeting\n2 = Query\n3 = Complaint\n4 = Feedback\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &category);

    switch (category)
    {
    case 1:
        printf("Choose the Sub type: 1=Morning 2=Evening");
        printf("Enter choice");
        scanf("%d" , &subtype);
        if(subtype==1)
        {
            printf("Good morning");
        }
        else if(subtype==2)
        {
            printf("Good evening");
        }
        else
        {
            printf("Invalid Selection");
        }
        break;

      case 2:
            printf("\nChoose Sub-type:\n1 = Product\n2 = Billing\n3 = Technical\n");
            printf("Enter choice: ");
            scanf("%d", &subtype);

            if (subtype == 1) {
                printf("\nBot: Routing to Product Information Handler...\n");
            } else if (subtype == 2) {
                printf("\nBot: Routing to Billing and Accounts Support...\n");
            } else if (subtype == 3) {
                printf("\nBot: Routing to Technical Assistance Team...\n");
            } else {
                printf("\nInvalid selection.\n");
            }
            break;

            case 3:
            printf("\nChoose Sub-type:\n1 = Delivery\n2 = Quality\n");
            printf("Enter choice: ");
            scanf("%d", &subtype);

            if (subtype == 1) {
                // Additional check for Delivery delay
                printf("Is the order delayed? (1 for Yes, 0 for No): ");
                scanf("%d", &delayed);

                if (delayed == 1) {
                    printf("\nBot: We sincerely apologize for the delay in your delivery. We are expediting it right away!\n");
                } else if (delayed == 0) {
                    printf("\nBot: We apologize for the delivery issue. We will look into it immediately.\n");
                } else {
                    printf("\nInvalid selection.\n");
                }
            } else if (subtype == 2) {
                printf("\nBot: We are deeply sorry for the quality issue. A replacement/refund ticket has been raised.\n");
            } else {
                printf("\nInvalid selection.\n");
            }
            break;

          

        case 4:
            printf("\nChoose Sub-type:\n1 = Positive\n2 = Negative\n");
            printf("Enter choice: ");
            scanf("%d", &subtype);

            if (subtype == 1) {
                printf("\nBot: Thank you so much for your kind words! We are glad you had a great experience.\n");
            } else if (subtype == 2) {
                printf("\nBot: We are sorry to hear that. Thank you for your feedback, we will work to improve.\n");
            } else {
                printf("\nInvalid selection.\n");
            }
            break;
    
    default:
    printf("\nInvalid selection.\n");
        break;
    }

    return 0;
}