#include<iostream>
using namespace std;

int main()
{
	
	int a[5],i,j;
	int temp;
	
	for(i=0;i<5;i++){
		cout<<"Enter your element : ";
		cin>>a[i];
	}
	
	for(i=0;i<5;i++){
//		printf("a[%d] : %d\n",i,a[i]);
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	
	cout<<"revser order"<<endl;
	
	for(i=4;i>=0;i--){
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	
	cout<<"asceding order "<<endl;
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				
			}
		}
	}
	
	for(i=0;i<5;i++){
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	
	
	
	return 0;
}
