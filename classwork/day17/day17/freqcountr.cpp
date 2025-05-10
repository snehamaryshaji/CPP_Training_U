#include<iostream>
using namespace std;
int main()
{
	int freq[26] = { 0 };
	char str[200];
	for (int i = 0;i < 26;i++)
		freq[i] = 0;
	for (int i = 0;i < 26;i++)
	{
		if (freq[1] > 0)
		{
			cout << char(i + 'a') << "-" << freq[i] << endl;
		}
	}
}