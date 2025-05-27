#include<iostream>
using namespace std;
//parent class
class a
{
private:
	int x;  //x cant able to access in b
	
protected:
	int y;  //y can access in b
	void protmethod()
	{
		cout << "protected method got called" << endl;
	}
	
public:
	a()
	{

		cout << "constructor a got called" << endl;
		x = 10;
		y = 20;
	}
	void dispa()
	{
		cout << x << endl;
		cout << y << endl;
	}
};
class b :public a
{
	int c;
protected:
	int d;
public:
	b()
	{
		cout << "const b got called" << endl;
		c = 90;
		d = 8;

	}
	void dispb()
	{
		cout << c << endl;
		cout << d << endl;
	}
	void protectedb()
	{
		protmethod(); //if it declared as private the cant acess---->proytected or private
		//x = 10;
		y = 98;//protected member it is inheritted from base class
	}
};
int main()
{
	//a obja;
	b objb;
	//obja.dispa();
	//objb.dispb();
	objb.dispa();
	//objb.protectedb();
	return 0;
}