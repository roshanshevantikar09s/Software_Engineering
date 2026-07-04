#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	
	file = fopen("demo.txt","a");
	
	if(file ==NULL){
		printf("error null data..");
		return 1;
	}
	
	fputs("\nthis is append mode data new line",file);
	
	fclose(file);
	
	printf("file inside append successfully..");
	
	return 0;
} 
