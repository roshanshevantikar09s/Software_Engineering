#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[50];
    char username[6];

    printf("Enter your full name: ");
    gets(fullName);

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }

    printf("Generated Username: %s", username);

    return 0;
} 
