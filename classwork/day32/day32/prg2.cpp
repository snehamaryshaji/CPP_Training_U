#include<iostream>
using namespace std;
class A
{
protected:
	int a;
	void disprt()
	{
		cout << "A method of protected" << endl;
	}
public:
	A() { a = 10; }
	void dispA()
	{
		cout << "A: a" << a << endl;
	}
};
class B : protected A
{
public:
	void dispB()
	{
		a = 20;disprt();
		dispA();
	}
};
class c :protected B
{
public:
	void dispc()
	{
		dispB();
	}
};
int main()
{
	//A d;
	//d.dispA();
	B objb;
	objb.dispB();
	//objb.dispA(); //privat and protected cant access 
	c objc;
	objc.dispc();
	//objc.dispB(); //private and protected error

	return 0;
}