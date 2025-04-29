#include<iostream>
using namespace std;
int get_bits(int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
int main()
{
	int secret;
	cout << "enter the secret code" << endl;
	cin >> secret;
	cout<<"unlock the door by taking "<<get_bits(secret)<<" steps";
	return 0;
}