//hex to decimal
#include<iostream>
using namespace std;
int main()
{
	char hex[20];
	int decimal = 0;
	int base = 1;
	cin>> hex;
	int length=0;
	while (hex[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1;i >= 0;i--)
	{
		int value;
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			value = hex[i] - '0';
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			value = hex[i] - 'A' + 10;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			value = hex[i] - 'a' + 10;
		}
		else
		{
			cout << "invalid";
		}
		decimal = decimal + value * base;
		base = base * 16;
	}
	cout << decimal;


	return 0;
}