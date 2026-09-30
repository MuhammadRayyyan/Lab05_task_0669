#include <stdio.h>

int main ()
{
    int time , motion , light_level , room;
    int cooking = 0;
    
    printf("Enter the time b/w 0-23");
    scanf("%d" , &time);
    printf("Enter the motion (0/1)");
    scanf("%d" , &motion);
    printf("Enter the light level b/1 (0-100)");
    scanf("%d", &light_level);
    printf("\nSelect Room:\n1 = Living Room\n2 = Bedroom\n3 = Kitchen\nChoice: ");
    scanf("%d", &room);

    // for kitchen
    if (room==3)
    {
     printf("Is the cooking active? (0/1)");
     scanf("%d" , &cooking);
    }
    if (room == 1) 
    {
        printf("Room: Living Room\n");
    } 
    else if (room == 2) 
    {
        printf("Room: Bedroom\n");
    } 
    else if (room == 3) 
    {
        printf("Room: Kitchen\n");
    } 
    else 
    {
        printf("Invalid room selection.\n");
        return 1;
    }

    if (motion==0)
    {
        printf("Away mode: all OFF");
    }
    else
    {
        if(time>=6 && time<18)
        {
            printf("Day mode: lights on");
        }
        if(time>=18 && time<23)
        {
            printf("Mode: Evening mode\nAction: dim lights\n");
        }
        if(time>=23 || (time>=0 && time<6))
        {
            printf("Night mode: lights off");
        }
    }

    if(room==3 && cooking==1)
    {
        printf("Exhaust fan on additional");
    }

    

    return 0;
}