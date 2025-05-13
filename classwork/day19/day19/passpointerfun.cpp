#include<iostream>
using namespace std;
void swap1(int, int);//pass by value
void swap2(int*, int*);//pointer
void swap3(int&, int&);//pass by reference / catch by reference
int main()
{
	int a = 10;
	int b = 20;
		cout <<" before in main " << a << "\t" << b << endl;
		swap1(a, b);
		cout << "in main " << a << "\t" << b << endl;
		swap2(&a, &b);
		cout << "in main " << a << "\t" << b << endl;
		swap3(a, b);
		cout << "in main " << a << "\t" << b << endl;
	return 0;
}
void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "swapped numbers " << a << "\t" << b << endl;

}
void swap2(int* a, int* b)
{
	int t;
	t = *a;
	*a =*b;
	*b = t;
	cout << "swapped numbers " << *a << "\t" << *b << endl;
}
void swap3(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "swapped numbers " << a << "\t" << b << endl;
}