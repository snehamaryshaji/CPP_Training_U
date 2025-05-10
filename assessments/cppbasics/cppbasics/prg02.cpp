/*program 02
find the greatest among three numbers
*/
#include<iostream>
using namespace std;
int main()
{
	int first_num, sec_num, third_num;
	cin >> first_num >> sec_num >> third_num;
	if (first_num > sec_num && first_num > third_num)
	{
		cout << first_num;
	}
	else if (sec_num> first_num && sec_num > third_num)
	{
		cout << sec_num;
	}
	else
	{
		cout << third_num;
	}
	return 0;
}