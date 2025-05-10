#include<iostream>
using namespace std;
void string_toggle(char str[]);
int main()
{
	char str[200];
	cin.getline(str, 200);
    string_toggle(str);
	cout << str;
	return 0;
}
void string_toggle(char str[])
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			str[i] = str[i];
			i++;
		}
	}
}