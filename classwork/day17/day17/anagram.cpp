#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = (n * 2) - 2;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <=k;j++)
		{
			cout << " ";
		}
		k = k - 1;
		
		for (int l= 0;l<=i;l++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}