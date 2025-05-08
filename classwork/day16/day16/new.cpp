#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int k = 0;k < n * 2;k++)
	{
		for (int j = 0;j < n/2;j++)
		{
		cout << "*";
	    }
		cout << endl;
	}
	
	
	
	return 0;
}