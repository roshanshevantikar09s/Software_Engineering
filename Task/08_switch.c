#include<stdio.h>
#include<stdio.h>
#include<conio.h>

void main()
{
    int ch, a, b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\nSum = %d", a+b);
            break;

        case 2:
            printf("\nSubtraction = %d", a-b);
            break;

        case 3:
            printf("\nMultiplication = %d", a*b);
            break;

        case 4:
            printf("\nDivision = %.2f", a/b);
            break;

        default:
            printf("\nInvalid Choice...");
    }

    getch();
}   
