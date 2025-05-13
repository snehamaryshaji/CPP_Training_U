#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 5;
	int c = 9;
	int* ptr = nullptr;
	ptr = &a;
	*ptr = 101;
	cout << "ptr value = " << *ptr << endl;
	ptr = &b;
	cout << "ptr value = " << *ptr << endl;
	ptr = &c;
	cout << "ptr value = " << *ptr << endl;
	return 0;
}