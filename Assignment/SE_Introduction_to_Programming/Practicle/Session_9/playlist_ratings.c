#include<stdio.h>
#include<conio.h>

int main()
{
    int playlistRatings[3][5] = {
        {5,4,5,4,5},
        {3,4,5,5,4},
        {4,5,4,5,5}
    };

    int i;

    printf("Ratings for Second Playlist:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", playlistRatings[1][i]);
    }

    return 0;
} 
