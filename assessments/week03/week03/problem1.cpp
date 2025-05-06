#include<iostream>
#include<string>
using namespace std;
int pos(char str[],char str2[])
{
int i = 0;
char *position = strstr(str, str2);
if (position)
{
	return position - str;
}
else
{
	return -1;
}
}
int pos2(char *str)
{
	int count = 0;
	while (*str)
	{
		if (*str == 'i')
		{
			return count;
		}
		else
		{
			str++;
			count++;
		}
	}
}
int main()
{
	char str[200];
	cout << "enter the sentance" << endl;
	cin.getline(str, 200);
	char str2[20] = "are";
	char str3[20] = "i";
	int posa=pos(str,str2);
	int posb = pos(str, str3);
		int sum = posa + posb;
	cout << sum;
	return 0;
}