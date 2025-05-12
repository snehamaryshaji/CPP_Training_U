//dec to hex
#include<iostream>
using namespace std;
int main()
{
	int dec;
	cin >> dec;
	char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	string hex_num = {};
	while (dec > 0)
	{
		int rem = dec%16;
		hex_num = hex[rem] + hex_num;
		dec = dec / 16;
	}
	cout << hex_num;
	return 0;
}
