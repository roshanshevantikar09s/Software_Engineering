#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("The number is Positive.");
    }
    else if(num < 0)
    {
        printf("The number is Negative.");
    }
    else
    {
        printf("The number is Zero.");
    }

    getch();
} 
