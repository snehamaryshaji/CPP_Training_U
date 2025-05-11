/*length of the string using recursion*/
#include<iostream>
using namespace std;
int reverse(char str[],int end);
int main()
{
	char str[200];
	cin.getline(str, 200);
	cout<<reverse(str,0);
	return 0;
}
int reverse(char str[],int end)
{
	if (str[end] == '\0')
		return 0;
	return 1+ reverse(str, end + 1);
}