#include<iostream>
using namespace std;
void bin(int binary)
{
	int decimal = 0;
	int base = 1;

	while (binary > 0)
	{
		int last = binary % 10;
		decimal = last * base;
		base = base*10;
		decimal = decimal / 10;
	}
	cout << binary;
}
void oct(int a)
{
	int dec = 0;
	int base = 0;
	while (a > 0)
	{
		int digit = a % 10;
		dec += digit * pow(8, base)
			a /= 10;
		base++;
	}
	cout << dec;


}

int main()
{
	int a;
	cin >> a;
	bin(a);
	oct(a);
	return 0;
}