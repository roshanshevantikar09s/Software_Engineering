#include<iostream>
using namespace std;

class Divy{
	private:
		int money = 500;
		public:
			friend void rajveer(Divy d);
};

void rajveer(Divy d){
	cout<<"Rajveer your money :"<<d.money;	
}

int main()
{
	Divy ob;
	rajveer(ob);
	return 0;
}
