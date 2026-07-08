#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char song[100];

    fp = fopen("playlist.txt", "r");

    printf("Songs containing 'love':\n");

    while(fgets(song, sizeof(song), fp) != NULL)
    {
        if(strstr(song, "Love") != NULL ||
           strstr(song, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
} 
