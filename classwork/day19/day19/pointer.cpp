/*
pointers
null or nullptr <==> (void*)0
implicit typecast is not possible in pointer
pointer cannot hold a value it can hold an address or another variables address
*/
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 12;
	//generic pointer
	//void* ptr;
	//int* ptr1 = (void*)0;//also  valid
	int* ptr1 = NULL;
	void* ptr = NULL;
	ptr1 = &a;
	cout<<"a " << (unsigned long int) & a << endl;
	cout <<"b " << (unsigned long int) & b << endl;
	cout<<"ptr " << (unsigned long int) & ptr << endl;
	cout << "ptr1 " << (unsigned long int) & ptr1 <<"   " << (unsigned long int) ptr1 << endl;
	cout << "ptr1 holds " << *ptr1<< endl;//dereferencing
	//printf("ptr = %d", ptr);
	ptr1 = &b;
	cout << "ptr1 " << (unsigned long int) & ptr1 << "   " << (unsigned long int) ptr1 << endl;
	cout << "ptr1 holds " << *ptr1 << endl;//dereferencing
	*ptr1 = 90;
	cout << "ptr1 holds " << *ptr1 << endl;//dereferencing
	cout << b << endl;
	ptr = &a;
	cout << "ptr " << (unsigned long int) & ptr << "   " << (unsigned long int) ptr<< endl;
	//ptr is a spcl var that points to a specific datatype
	cout << "ptr holds value   " << *(int*)ptr << endl;
	//while using generic pointer explicit typecasting is needed *(int*)
	return 0;
}
