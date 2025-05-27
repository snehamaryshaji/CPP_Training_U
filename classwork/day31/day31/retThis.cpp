#include<iostream>
using namespace std;
class test
{
	int x;
	int y;
public:
	test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int disply()
	{
		cout << "x= " << x << endl;
		cout << "y= " << y<< endl;
		return 0;
	}
	test& setx(int x)
	{
		this->x = x;
		return *this;
	}
	test& sety(int y)
	{
		this->y = y;
		return *this;
	}
};
int main()
{
	test objt(7,8);
	objt.disply();
	objt.setx(234);
	objt.sety(234);
	objt.disply();
	cout << "return ob  " << &objt << endl;
	test &ob = objt.setx(2);
	cout <<"return ob this " << &ob << endl;
	test &ob1 = objt.sety(2);
	cout <<"return ob this " << &ob1 << endl;
	objt.setx(2).sety(23); //one funcction calling another function bypassing obj
	objt.disply();
	return 0;
}