#include<iostream>
using namespace std;
void odd_floor(int floor, int n)
{
	if (floor > n)
		return;
	cout << floor << " ";
	odd_floor(floor+2, n);
}
int main()
{
	int n;
	cout <<"enter the top floor" << endl;
	cin >> n;
	odd_floor(1, n);
	return 0;
}