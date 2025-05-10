/*remove vowel from a string
*/
#include<iostream>
using namespace std;
#include<iostream>
#include<cstring>
using namespace std;
void remove_vowel(char vowel[], char str[]);
int main()
{
	char vowel[] = "aeiouAEIOU";
	char str[200];
	cin.getline(str, 200);
	remove_vowel(vowel, str);
	//cout << str;
	return 0;
}
void remove_vowel(char vowel[], char str[])
{
	int count = 0;
	int k = 0;
	for (int i = 0;str[i]!='\0';i++)
	{
		if (!strchr(vowel, str[i]))
		{
			str[k++] = str[i];
		}
	}
	str[k] = '\0';
	cout << str;
}