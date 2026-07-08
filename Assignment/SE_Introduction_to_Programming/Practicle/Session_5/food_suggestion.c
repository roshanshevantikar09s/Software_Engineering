#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;

    printf("Choose Meal Time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Suggested Dish: Poha");
            break;

        case 2:
            printf("Suggested Dish: Paneer Thali");
            break;

        case 3:
            printf("Suggested Dish: Biryani");
            break;

        case 4:
            printf("Suggested Dish: Sandwich");
            break;

        default:
            printf("Try some fruits!");
    }

    return 0;
} 
