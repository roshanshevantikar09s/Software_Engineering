#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "Shape of You\n");

    fclose(fp);

    printf("Songs added successfully.");

    return 0;
} 
