#include<iostream>
using namespace std;
template <class T>
void myswap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}
int main()
{
	int a = 10,b = 20;
	cout << a << "   " << b << endl;
	myswap(a, b);
	cout << a<< "   " << b << endl;
	char ch = 'c', ch2 = 'n';
	myswap(ch, ch2);
	cout << ch << "   " << ch2 << endl;
	return 0;
}
template <class T1,class T2>
T2 add(T1 a, T2 b)
{
	cout << a + b << endl;
}

	