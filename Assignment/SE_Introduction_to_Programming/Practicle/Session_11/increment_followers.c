#include<stdio.h>
#include<conio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main()
{
    int followers[5] = {500, 800, 1200, 1500, 2000};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Followers Count:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", followers[i]);
    }

    return 0;
} 
