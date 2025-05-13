#include<iostream>
using namespace std;
int main()
{
	int  a[] = { 4,7,8 };
	int* ptr = a;//declaration with initialization
	cout << *ptr++ << endl;
	cout << ++*ptr<< endl;//increment then assign
	ptr = a;//reassigning to ba
	int prod = *ptr * *ptr;
	cout << prod << endl;
	cout << sizeof(ptr) << endl;
	return 0;
}