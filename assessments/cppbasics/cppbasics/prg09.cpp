/*write a program to count the number of vowels
*/
#include<iostream>
#include<cstring>
using namespace std;
int is_vowel(char vowel[],char str[]);
int main()
{
	char vowel[] = "aeiouAEIOU";
	char str[200];
	cin.getline(str, 200);
	cout<<is_vowel(vowel, str);
	return 0;
}
int is_vowel(char vowel[], char str[])
{
	int count = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		for (int j = 0;j < strlen(vowel);j++)
		{
			if (str[i] == vowel[j])
			{
				count++;
			}
		}
	}
	return count;
}