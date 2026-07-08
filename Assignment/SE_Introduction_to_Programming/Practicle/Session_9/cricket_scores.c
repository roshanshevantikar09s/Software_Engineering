#include<stdio.h>
#include<conio.h>

int main()
{
    int cricketScores[3][2] = {
        {180, 175},
        {210, 195},
        {165, 190}
    };

    int i, max;

    for(i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
            max = cricketScores[i][0];
        else
            max = cricketScores[i][1];

        printf("Highest Score in Match %d = %d\n",
               i + 1, max);
    }

    return 0;
} 
