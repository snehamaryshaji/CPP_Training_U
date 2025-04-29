#include<iostream>
using namespace std;
void tunnel(int n)
{
	cout << n << ",";
	if (n <= 0)
		return;
	tunnel(n / 2);
}
int main()
{
	int n;
	cout << "enter the energy value" << endl;
	cin >> n;
	tunnel(n);
	return 0;
}