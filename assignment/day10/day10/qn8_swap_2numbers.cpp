#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	
}
int main()
{
	int a = 5;
	int b = 6;
	cout << "before swapping" << endl;
	cout << "a= " << a << " b= " << b << endl;
	swap(a, b);
	cout << "after swapping" << endl;
	cout << "a= " << a << " b= " << b << endl;
	return 0;
}