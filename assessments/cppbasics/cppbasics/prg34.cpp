/*floyds triangle*/
#include<iostream>
using namespace std;
int main()
{
	int n, c = 1;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		for (int k = 1;k <= i;k++)
		{
			cout << c++<<" ";
		}
		cout << endl;
	}
		return 0;
}