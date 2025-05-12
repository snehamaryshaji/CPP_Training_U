#include<iostream>
using namespace std;
void replace_blank(char str[])
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' && str[i + 1] == ' '))
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	cout << str;
}
int main()
{
	char str[100];
	cin.getline(str, 100);
	replace_blank(str);
	return 0;
}