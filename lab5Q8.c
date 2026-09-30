#include <stdio.h>
int main ()
{
    int permission;
    int READ=1 , WRITE=2 , EXECUTE=4;
    printf("Enter the permission value (0-7)");
    scanf("%d" , &permission);

    if(permission & EXECUTE)
    {
        printf("Access granted: full control");
    }
    else{
        if((permission & READ) && (permission & WRITE))
        {
            printf("Access granted: read and write");
        }
        else if((permission & READ) && !(permission & WRITE))
        {
                printf("Access granted: read only");
        }
        else
        {
            printf("Access denied");
        }
    }

    return 0;
}