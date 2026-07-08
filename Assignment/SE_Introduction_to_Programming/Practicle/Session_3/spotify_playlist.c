#include<stdio.h>
#include<conio.h>

int main()
{
    char playlistName[] = "Top Hits 2026";
    int totalSongs = 25;
    float averageDuration = 3.8;

    printf("My favorite Spotify playlist is '%s' which contains %d songs with an average duration of %.1f minutes per song.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
} 
