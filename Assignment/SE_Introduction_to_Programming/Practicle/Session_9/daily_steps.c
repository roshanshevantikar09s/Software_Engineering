#include<stdio.h>
#include<conio.h>

int main()
{
    int dailySteps[7] = {5000, 6500, 7000, 8000, 7500, 9000, 8500};
    int i;

    printf("Daily Steps for the Week:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d : %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
} 
