#include<iostream>
using namespace std;

int main()
{
//	char name[20];
	string name;
	
	cout<<"Enter your Name : ";
//	cin>>name;

//	function
	getline(cin,name);
	
	cout<<"Name :"<<name;
	
	return 0;
}
