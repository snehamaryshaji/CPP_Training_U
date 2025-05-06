#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char name[MAX];
	cin.getline(name, 200);
	char str2[] = { 'a','e','i','o','u','A','E','I','O','U' };
	int i = 0;
	int count = 0;
	while (name[i])
	{
		for (int j = 0;j < 10;j++)
		{
			if (name[i] == str2[j])
			{
				count++;
			}
		}
		i++;
	}
	cout << count;
	return 0;
}