#include<iostream>
using namespace std;
int conDec(int num, int base)
{

	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % base;
		sum += r * pow(10, place);
		num = num / 10;
		place++;
	}
	return sum;
}
int baseDec(int num, int base)
{
	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % 10;
		sum =sum + r * pow(base, place);
		place++;
		num = num / 10;
	}
	return sum;
}
int main()
{
	int dec;
	cin >> dec;
	int base;
	cin >> base;
	//cout << conDec(dec, base) << endl;
	cout << baseDec(dec, base)<<endl;
	return 0;
}