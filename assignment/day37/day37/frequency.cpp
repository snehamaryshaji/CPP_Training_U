#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int freq[10] = { 0 };
	for (int i = 0;i < str.length();i++)
	{
		int digit = str[i] - '0';
		freq[digit]++;
	}
	int min = INT_MAX;
	int max =INT_MIN;
	int count = 0;
	for (int i = 0;i <10;i++)
	{
		if (freq[i] > 0)
		{
			int def_v = i * freq[i];
			if (def_v < min)
				min = def_v;
			if (def_v> max)
				max = def_v;
			count++;

		}
	}
	if (count == 1)
	{
		cout << max << endl;

	}
	else {
		cout << max - min << endl;
	}
	return 0;
}