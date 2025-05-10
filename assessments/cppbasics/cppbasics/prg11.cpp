/*
to remove all characters from a string except alphabets
*/
#include<iostream>
using namespace std;
void store_alpha(char str[]);
int main()
{
	char str[200];
	cin.getline(str, 200);
	store_alpha(str);
	return 0;
}
void store_alpha(char str[])
{
	int count = 0;
	int k = 0;
	for (int i = 0;str[i] != '\0';i++)
	{
		if (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90)
		{
			str[k++] = str[i];
		}
	}
	str[k] = '\0';
	cout << str;
}