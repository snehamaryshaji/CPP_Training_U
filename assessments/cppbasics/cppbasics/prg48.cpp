/*program to decimal to binary*/
#include<iostream>
using namespace std;
int main()
{
	int dec;
	cin >> dec;
	if (dec == 0)
	{
		cout << "0";
	}
	else
	{
		while (dec > 0)
		{
			cout << dec % 2;
			dec=dec / 2;
		}
	}
	return 0;
}