#include<iostream>
using namespace std;
void disply(int n)
{
	if (n > 0)
	{
		cout << n << endl;
		disply(n - 1);
	}
}
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	disply(num);
	cout << endl;
	return 0;
}