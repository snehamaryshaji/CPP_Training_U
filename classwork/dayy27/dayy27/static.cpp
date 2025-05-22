#include<iostream>
using namespace std;
class T
{
private:
	static int val;
public:
	static int num;
	void disp()
	{
		cout << "value :" << val;
		cout << "value :" << num;
	}
	T()
	{
		val++;
	}
};
int T::val;//make it as global then only we can access the static variable(private)
//if the static is private then make it as global
int T::num;
int main()
{
	//T mem,e2;
	//mem.disp();
	//cout << T::val << endl;//not working
	//e2.disp();
	return 0;
}