#include<stdio.h>
#include<conio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Paneer Pizza", 249.0, 4.5},
        {"Veg Burger", 129.0, 4.2},
        {"Pav Bhaji", 99.0, 4.6}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nFood Item %d\n", i + 1);
        printf("Name   : %s\n", menu[i].itemName);
        printf("Price  : %.2f\n", menu[i].price);
        printf("Rating : %.1f\n", menu[i].rating);
    }

    return 0;
} 
