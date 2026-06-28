#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	int a=0,b=1,c,i;
	
	printf("%d %d",a,b);
	
	for(i=3;i<=n;i++){
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	return 0;
}

int main()
{
	int num;
	
	printf("Enter limit :");
	scanf("%d",&num);
	
	fib(num);
	
	return 0;
}
