#include<iostream>
using namespace std;
void count_down(int n)
{
	while (n!=0)
	{
		cout << n << endl;
		n--;
	}
}
int main()
{
	int n;
	cout << "enter the n value" << endl;
	cin >> n;
	count_down(n);
	cout << "completed!..." << endl;
	return 0;
}