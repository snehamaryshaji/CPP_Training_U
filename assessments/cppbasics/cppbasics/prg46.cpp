/*write a program for octal to decimal conversion*/
#include<iostream>
using namespace std;
int oct_to_dec(int octal);
int main()
{
	int octal;
	cin >> octal;
	cout<<oct_to_dec(octal);
	return 0;
}
int oct_to_dec(int octal)
{
	int dec = 0;
	int place = 0;
	while (octal)
	{
		int digit = octal % 10;
		dec = dec + digit * pow(8, place);
		octal = octal / 10;
		place++;
	}
	return dec;
}