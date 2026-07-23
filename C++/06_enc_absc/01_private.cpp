#include<iostream>
using namespace std;

class Perent{
	protected:
		int a;
	public:
		void putdata(){
			cout<<"Enter your A : "<<a;
			cin>>a;
		}
		void getdata(){
			cout<<"A class :"<<a<<endl;
		}
};
class child : public Perent{
	public:
		void data(){
			cout<<"B class A : "<<a<<endl;
		}
};

int main()
{
	child ob;
	ob.putdata();
	ob.getdata();
	ob.data();
	
	return 0;
}
