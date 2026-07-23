#include<iostream>
using namespace std;

class Karan{
	private:
		int money = 500;
	public:
		friend class raj;
		
};
class raj : public Karan{
	public:
		void data(Karan k){
			cout<<"Raj your money : "<<k.money;
		}
};

int main()
{
	Karan ob;
	raj user;
	user.data(ob);
	
	return 0;
} 



