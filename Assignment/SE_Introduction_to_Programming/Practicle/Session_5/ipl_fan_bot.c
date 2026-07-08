#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    gets(team);

    if(strcmp(team, "Mumbai Indians") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if(strcmp(team, "Chennai Super Kings") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if(strcmp(team, "Royal Challengers Bangalore") == 0)
    {
        printf("Ee Sala Cup Namde!");
    }
    else if(strcmp(team, "Kolkata Knight Riders") == 0)
    {
        printf("Korbo Lorbo Jeetbo Re!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}  
