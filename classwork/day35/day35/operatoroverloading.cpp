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
	int getvalue()
	{
		return *data;
	}
	myarray operator +(const myarray& obj)
	{
		return myarray(*data + *obj.data);
	}
	myarray& operator ++(int)
	{
		int temp =*data;
		temp++;
		*data = temp;
		return *this;
	}
	myarray& operator ++()
	{
		int temp = *data;
		temp++;
		*data = temp;
		return *this;
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
	myarray a4 = a1 + a3;
	a4.disply();
	a4++;
	++a4;
	a4.disply();
	return 0;
}