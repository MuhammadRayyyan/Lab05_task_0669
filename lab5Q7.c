#include <stdio.h>
int main ()
{
    int stream,interest,med;
    printf("Choose Stream:\n");
    printf("1 = Science\n2 = Commerce\n3 = Arts\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &stream);

    switch (stream)
    {
    case 1:
        printf("Choose ur interest: 1=Bio 2=Physics 3=Chemistry");
        scanf("%d" , &interest);

        if(interest==1)
        {
            printf("are u ineterested in medicine? 1=Yes 0=No");
            scanf("%d",&med);

            if(med==1)
            {
                printf("Recommended course: MBBS");
            }
            else
            {
                printf("Recommended course: Biotechnology");
            }
        }
        else if(interest==2)
        {
            printf("\nRecommended Course: B.Sc Physics / Astrophysics\n");
        }
        else if(interest==3)
        {
            printf("\nRecommended Course: Chemical Engineering / B.Sc Chemistry\n");
        }
        else 
        {
            printf("Invalid choice");
        }
        break;

        case 2:
        printf("\nChoose Interest:\n1 = Accounting\n2 = Marketing\n");
            printf("Enter choice: ");
            scanf("%d", &interest);

            if(interest==1)
            {
                printf("\nRecommended Course: Chartered Accountancy (CA) / B.Com Accounting\n");
            }
            else if(interest==2)
            {
                printf("\nRecommended Course: BBA in Marketing\n");
            }
            else 
            {
                printf("INvalid choice");
            }
            break;

        case 3:
            printf("\nChoose Interest:\n1 = Literature\n2 = History\n3 = Psychology\n");
            printf("Enter choice: ");
            scanf("%d", &interest);

            if (interest == 1) {
                printf("\nRecommended Course: B.A. English Literature\n");
            } else if (interest == 2) {
                printf("\nRecommended Course: B.A. History / Archaeology\n");
            } else if (interest == 3) {
                printf("\nRecommended Course: B.Sc / B.A. Psychology\n");
            } else {
                printf("\nInvalid choice.\n");
            }
            break;
            


    
    default:
    printf("Invalid choice");
        break;
    }

    return 0;
}