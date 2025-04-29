#include<iostream>
using namespace std;
void dragon(int n)
{
	for (int i = 1;i <= n;i++)
	{
		if (i % 3 == 0)
			continue;
		cout << i << " ";
	}
}
int main()
{
	int n;
	cout << "enter a number" << endl;
	cin >> n;
	dragon(n);
	return 0;
}