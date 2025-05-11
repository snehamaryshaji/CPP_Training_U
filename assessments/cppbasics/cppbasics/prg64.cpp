#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	x = x ^ y;
	//cout << x;
	y = x ^ y;
	x = x ^ y;
	cout << x << " " << y;
	return 0;
}