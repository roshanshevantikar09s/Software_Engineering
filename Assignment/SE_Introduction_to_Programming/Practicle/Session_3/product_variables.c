#include<stdio.h>
#include<conio.h>

int main()
{
    char productName[] = "iPhone 16";
    float price = 79999.99;
    double rating = 4.8;

    printf("productName = %s\n", productName);
    printf("price = %.2f\n", price);
    printf("rating = %.1lf\n", rating);

    return 0;
} 
