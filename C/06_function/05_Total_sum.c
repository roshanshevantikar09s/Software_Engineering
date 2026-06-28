#include<stdio.h>
#include<conio.h>

int total(int n){
	int i,sum = 0;
	for(i=n;i>=1;i--){
		sum = sum + i;
	}
	return sum;
} 
void main()
{
	int num ;
	printf("enter your number :");
	scanf("%d",&num);
	
	printf("number : %d",num);
	printf("\nTotal sum : %d",total(num));
	
	
} 
