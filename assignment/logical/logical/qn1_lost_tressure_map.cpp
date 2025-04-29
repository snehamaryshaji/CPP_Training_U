#include<iostream>
using namespace std;
int small_digit(int num)
{
	int small = 9;
	while (num!=0)
	{
		int rem = num % 10;
		if (small>=rem)
		{
			small = rem;
		}
		num = num / 10;

	}
	return small;
}
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	int res=small_digit(num);
	cout << "smallest= " << res << endl;
	return 0;
}