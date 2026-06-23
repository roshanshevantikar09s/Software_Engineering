#include<stdio.h>
#include<conio.h>

void main()
{
    int maths,english,gujarati,total;
    float per;

    printf(" Maths Marks : ");
	 scanf("%d", &maths);

    printf(" English Marks : "); 
     scanf("%d",&english);

    printf(" Gujarati Marks : ");
      scanf("%d",&gujarati);

    total = maths+english+gujarati;
    per = total/3.0;

    printf("\nTotal = %d",total);
    printf("\nPercentage = %.2f",per);

    if(maths<35 || english<35 || gujarati<35)
    {
        printf("\nResult = Fail");
    }
    else if(per>=80)
    {
        printf("\nGrade = A");
    }
    else if(per>=60)
    {
        printf("\nGrade = B");
    }
    else if(per>=40)
    {
        printf("\nGrade = C");
    }
    else
    {
        printf("\nGrade = D");
    }

    getch();
}


