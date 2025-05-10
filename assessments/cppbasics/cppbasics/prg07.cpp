/*find the length of the string without using strlen
*/
#include<iostream>
using namespace std;
int string_length(char str[]);
int main()
{
	char str[200];
	cin.getline(str, 200);
	cout<<string_length(str);
	return 0;
}
int string_length(char str[])
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return count;
}