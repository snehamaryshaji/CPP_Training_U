#include<iostream>
using namespace std;
bool is_prime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;

	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}
void get_num(int num)
{
	for (int i = 2;i <= num/2;i++)
	{
		 if (is_prime(i) == 1)
		{
			 int next = num - i;
			 if (is_prime(next) == 1)
			 {
				
				 cout << i << "+" << next<<"="<<"34"<<endl;
			}

		}

	}
	//return 0
}
int main()
{
	int num;
	cout<< "enter a positive value" << endl;
	cin >> num;
	get_num(num);
	return 0;
}