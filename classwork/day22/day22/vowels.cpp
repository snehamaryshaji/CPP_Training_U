#include<iostream>
using namespace std;
int count_vowel(char* str, char* name)
{
	int count = 0;
	for(int i=0;i<strlen(str);i++,str++)
	{
		for (int j = 0;j < strlen(name);j++,name++)
		{
			if (*str == *name)
			{
				count++;
				break;

			}
		}
	}
	return count;
}
int main()
{
	char name[] = "aeiouAEIOU";
	char str[100];
	cin.getline(str, 100);
	cout<<count_vowel( name, str);
	return 0;
}