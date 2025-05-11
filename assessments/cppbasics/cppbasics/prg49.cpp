////decimal to octal conversion
#include<iostream>
using namespace std;
int main()
{
	int decimal;
	int octal = 0;
	int place = 1;
	cin >> decimal;
	if (decimal == 0)
	{
		cout << "0";
		return 0;
	}
	while (decimal > 0)
	{
		int rem = decimal % 8;
		octal = octal + rem * place;
		place = place * 10;
		decimal = decimal / 8;
	}
	cout << octal;
	return 0;
}