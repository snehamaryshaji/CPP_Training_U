/*remove spaces */
#include<iostream>
using namespace std;
void space_rem(char arr[]);
int main()
{
	char arr[100];
	cin.getline(arr, 100);
	space_rem(arr);
	return 0;
}
void space_rem(char arr[])
{
	int j = 0;
	int i = 0;
	while (arr[i]!='\0')
	{
		if (arr[i] != ' ')
		{
			arr[j++] = arr[i];
		}
		i++;
	}
	arr[j] = '\0';
	cout << arr;
}