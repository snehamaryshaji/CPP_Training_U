/*convert temparature in faranheit to celsius*/
#include<iostream>
using namespace std;
int main()
{
	double far, cel;
	cin >> far;
	cel = (far - 32) * 5 / 9;
	cout << cel;
	return 0;
}