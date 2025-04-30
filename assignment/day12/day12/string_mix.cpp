/*s1=ABCD
s2=abcd
s3=AaBbCcDd
string length is not equal
*/
#include<iostream>
using namespace std;
int string_len(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i])
	{
		i++;
		count++;
	}
	return count;
}
void mixed(char s1[],int l1,char s2[],int l2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char arr[20];
	while(s1[i]||s2[j])
	{
		if (k % 2 != 0)
		{
			arr[k] = s1[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = s1[j];
			j++;
			k++;
		}

	}
	cout << "s3= " << arr << endl;
}

int main()
{
	char s1[20];
	char s2[20];
	int res;
	cout << "enter the s1" << endl;
	cin.getline(s1, 100);
	cout << "enter the s2" << endl;
	cin.getline(s2, 100);
	int l1= string_len(s1);
	int l2 = string_len(s2);
	mixed(s1, l1, s2, l2);

	return 0;
}
