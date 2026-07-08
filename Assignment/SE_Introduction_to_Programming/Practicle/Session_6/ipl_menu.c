#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char newTeam[50];

    while(1)
    {
        printf("\n----- IPL MENU -----\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nMy Favorite IPL Teams:\n");
                printf("1. Mumbai Indians\n");
                printf("2. Chennai Super Kings\n");
                printf("3. Royal Challengers Bangalore\n");
                break;

            case 2:
                printf("Enter new team name: ");
                scanf(" %[^\n]", newTeam);
                printf("%s added successfully!\n", newTeam);
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
} 
