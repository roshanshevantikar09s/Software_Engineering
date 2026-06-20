#include<stdio.h>
#include<conio.h>

int main(){
	
	float a,b;
	printf("Enter your A : ");
	scanf("%f",&a);
	printf("Enter your B : ");
	scanf("%f",&b);
	
	printf("A : %f",a);
	printf("\nB : %f",b);
	
	printf("\n---- Artihmatic operation----");
	printf("\nSum : %f",a+b);
	printf("\nSub : %f",a-b);
	printf("\nmul : %f",a*b);
	printf("\nDivi : %f",a/b);
	
	
    getch();
}
