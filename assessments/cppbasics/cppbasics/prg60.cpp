//power using multiplication
#include<iostream>
using namespace std;
int find_power(int value, int power)
{
	if (power == 0)
		return 1;
	return value * find_power(value, power - 1);
}
int main()
{
	int value;
	int power;
	cout << "enter the value and power" << endl;
	cin >> value >> power;
	int res = find_power(value, power);
	cout << "value= " << res;
	return 0;
}