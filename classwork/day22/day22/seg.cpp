#include<iostream>
using namespace std;
int main()
{
	int* ptr= nullptr;  //void*0 is the value
	int a = 10;
	ptr = &a;
	cout << a<<endl;
	cout << &a << endl;
	cout << ptr <<endl;
	//cout << *ptr << endl;  //segmentation fault
	cout << *ptr << endl;
	*ptr = 20;
	cout << *ptr << endl;
	return 0;
}