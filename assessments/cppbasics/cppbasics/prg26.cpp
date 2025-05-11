/*check two strings anagram or not*/
#include<iostream>
using namespace std;
int main()
{
	char str1[100];
	char str2[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);
	if (strlen(str1) == strlen(str2))
	{
		int count = 0;
		for (int i = 0;i < strlen(str1);i++)
		{
			bool flag = false;
			for (int j = 0;j < strlen(str2);j++)
			{
				if (str1[i] == str2[j])
				{
					flag = true;
					str2[j] = '0';
					break;
				}
			}
			if (flag)
			{
				count++;
			}
		}
		if (strlen(str1) == count)
		{
			cout << "anagram";
		}
		else
		{
			cout << "not anagram";
		}
	}
	else
	{
		cout << "not an anagram";
	}
	return 0;
}