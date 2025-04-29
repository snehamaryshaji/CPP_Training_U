#include<iostream>
using namespace std;
bool left_most_dig(int num)
{
	while (num>10)
	{
		num = num / 10;
	}
	if (num % 2 == 0)
		return true;
	else
		return false;
}
int main()
{
	int scrt_code;
	cout << "enter the secret code" << endl;
	cin >> scrt_code;
	if (left_most_dig(scrt_code))
		cout << "code is valid" << endl;
	else
		cout << "code is not valid" << endl;
	return 0;
}