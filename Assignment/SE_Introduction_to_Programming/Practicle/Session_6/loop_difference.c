#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 5;

    printf("Entry Controlled Loop (while)\n");
    while(x < 5)
    {
        printf("This will not execute.\n");
    }

    printf("\nExit Controlled Loop (do-while)\n");
    do
    {
        printf("This executes once even if condition is false.\n");
    }
    while(x < 5);

    return 0;
} 
