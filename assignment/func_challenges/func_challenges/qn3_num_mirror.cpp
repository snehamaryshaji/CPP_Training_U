#include<iostream>
using namespace std;
void mirror(int num)
{
	if (num == 0)
		return;
	cout << num % 10 << " ";
	mirror(num / 10);
}
int main()
{
	int num;
	cout << "enter a number" << endl;
	cin >> num;
	cout << "reversed number" << endl;
	mirror(num);
	return 0;
}