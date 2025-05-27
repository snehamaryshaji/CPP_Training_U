/*
this will differentiate between the member and passed value
this operator is the hidden member in a class 
to return the reference of the calling object*/
#include<iostream>
using namespace std;
class test {
	int v;
	string name;
	int phone;
public:        //below members are accessible by outside
	test() {     //default constructor
		v = 0;
	}
	test(int v) //parameterized constructor
	{
		this->v = v;
	}
	int getv()   //returning the value of private member v
	{
		return v;
	}
	void setv(int v) //setting the private member v using method
	{
		this->v = v;//v=v it will make confusion to the compiler
	}
	void setname(string);
	string getname();
};
int main()
{
	test v;
	test a(10);
	//a.getv = 9;
	cout << a.getv()<<endl;
	a.setv(8);
	cout<<a.getv();
	return 0;
}