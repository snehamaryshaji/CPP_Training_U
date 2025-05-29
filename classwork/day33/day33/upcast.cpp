#include<iostream>
using namespace std;
class base
{
public:
	virtual void disp() {cout << "base" << endl;}
};
class der : public base
{
public:
	void disp1() {
		cout << "base" << endl;
	}
	 //void disp() {cout << "base" << endl;}
};
int main()
{ 
	der d;
	base* ptr = new base;
	ptr->disp();
	ptr->disp();
	ptr = &d;
	ptr->disp();
	//ptr->disp1();
	return 0;
}