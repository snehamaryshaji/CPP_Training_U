#include<iostream>
using namespace std;
void fun(char str[]);
/*
void fun(char str[])
{
	int first = 0;
	int end = 0;
	while (str[end]!='\0')
	{
		end++;
	}
	end--;
	while (first < end)
	{
		char temp = str[first];
		str[first] = str[end];
		str[end] = temp;
		first++;
		end--;
	}
	cout << str;
}
*/
int main()
{
	char str[100];
	cin.getline(str, 100);
	fun(str);
	return 0;
}
void fun(char str[])
{
	int i = 0;
	int first = 0;
	int end = 0;
	while (str[i] != '\0')
	{
		
		while (str[end] != ' '&& str[end]!='\0')
		{
			end++;
		}
		int new_end = end-1;
		
		while (first < new_end)
		{
			char temp = str[first];
			str[first] = str[new_end];
			str[new_end] = temp;
			first++;
			new_end--;
		}
		first =++end;
		i=end;
	}
	cout << str;
}