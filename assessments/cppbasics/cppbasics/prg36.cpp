/*reverse the string using recurtion*/
#include<iostream>
using namespace std;
void reverse(char str[],int first,int end);
int main()
{
	char str[100];
	cin.getline(str, 100);
	reverse(str,0,strlen(str)-1);
	cout << str;
	return 0;
}
void reverse(char str[], int first, int end)
{
	if (first >= end)
	{
		return;
	}
			char temp = str[first];
			str[first] = str[end];
			str[end] = temp;
			reverse(str, first + 1, end - 1);
}