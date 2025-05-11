/*program to decimal to binary*/
#include<iostream>
using namespace std;
int main()
{
	int dec;
	cin >> dec;
	int bin[32];
	int index = 0;
	while (dec > 0)
	{
		bin[index++] = dec % 2;
		dec = dec / 2;

	}
	for (int i = index-1;i >= 0;i--)
	{
		cout << bin[i];
	}
	return 0;
}