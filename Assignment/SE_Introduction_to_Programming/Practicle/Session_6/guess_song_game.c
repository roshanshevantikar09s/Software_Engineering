#include <stdio.h>
#include <string.h>

int main()
{
    char guess[50];
    char song[] = "Believer";

    printf("Guess the Song Game\n");
    printf("Available Songs:\n");
    printf("1. Believer\n");
    printf("2. Shape of You\n");
    printf("3. Blinding Lights\n");
    printf("4. Perfect\n\n");

    printf("Hint: Popular Imagine Dragons song\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, song) != 0)
        {
            printf("Wrong guess! Try again.\n");
        }

    } while(strcmp(guess, song) != 0);

    printf("Congratulations! You guessed the song correctly.\n");

    return 0;
} 
