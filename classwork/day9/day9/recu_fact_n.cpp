#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	cout << "enter n value" << endl;
	cin >> n;
	int ret=factorial(n);
	cout << "factorial=" << ret<< endl;
}
int factorial(int n)
{
	if (n==0||n == 1)
		return 1;
	int num = n * factorial(n - 1);
	return num;
}