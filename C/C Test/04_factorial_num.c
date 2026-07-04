#include<stdio.h>
#include<conio.h>

int fact(int n){
	int i,f = 1;
	for(i=1;i<=n;i++){
		f = f *i;
	}
	return f;
} 
void main()
{
	int num ;
	printf("enter your number :");
	scanf("%d",&num);
	
	printf("Factorial : %d",fact(num));
	
	getch();	
} 
