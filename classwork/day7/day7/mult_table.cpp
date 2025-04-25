#include<iostream>
using namespace std;
int main()
{
	int st_tab;
	int end_tab;
	cout << "enter the start table" << endl;
	cin >> st_tab;
	cout << "enter end table" << endl;
	cin >> end_tab;
	for (int i = st_tab;i <= end_tab;i++)
	{
		for (int j =1;j <= 10;j++)
		{
			cout << i << "*" << j << "=" << j * i << endl;
		}
		cout << "------------" << endl;
	}
	return 0;
}