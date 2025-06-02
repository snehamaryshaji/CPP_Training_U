#include<iostream> //shallow copy same obj and same address
using namespace std;
class myarray
{
	int* data;
	int size;
public:
	myarray(int val)
	{
		data = new int(val);
		size = val;

	}
	myarray(const myarray& obj)  //deep copy
	{
		cout << "copy constructor got called" << endl;
		data = new int(*obj.data);
	}
	void setvalue(int val)
	{
		*data = val;
	}
	void disply()
	{
		cout << "\t" << data << endl;
		cout << "\t" << *data << endl;
	}
	~myarray()
	{
		delete data;
	}
};
int main()
{
	myarray a1(10);
	a1.disply();
	myarray a3 = a1;
	a1.disply();
	a3.setvalue(20);
	a3.disply();
	a1.disply();
	return 0;
}