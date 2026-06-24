#include<stdio.h>
#include<conio.h>

void main()
{
    int ch;

    printf("Enter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\nMonday");
            break;

        case 2:
            printf("\nTuesday");
            break;

        case 3:
            printf("\nWednesday");
            break;

        case 4:
            printf("\nThursday");
            break;

        case 5:
            printf("\nFriday");
            break;

        default:
            printf("\nInvalid choice...");
    }

    getch();
} 
