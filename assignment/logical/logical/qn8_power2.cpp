#include<iostream>
using namespace std;
int find_power(int num)
{
	int power = 1;
	while (power << 1 <= num)
	{
		power = power << 1;
	}
	return power;
}
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	cout<<"the highest energy is"<<find_power(num)<<endl;
	return 0;
}