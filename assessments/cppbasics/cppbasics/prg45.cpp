/*program to find max and min value without using comparison operators*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "max " << (((a + b) + abs(a - b)) / 2) << endl;
	cout << "min " << (((a + b) - abs(a - b)) / 2) << endl;
	return 0;
}