#include<stdio.h>
#include<conio.h>

float averageSpend(int orders[])
{
    int sum = 0, i;

    for(i = 0; i < 7; i++)
    {
        sum += orders[i];
    }

    return (float)sum / 7;
}

int main()
{
    int orders[7] = {200, 350, 150, 400, 250, 500, 300};

    printf("Average Weekly Spend = %.2f\n",
           averageSpend(orders));

    return 0;
} 
