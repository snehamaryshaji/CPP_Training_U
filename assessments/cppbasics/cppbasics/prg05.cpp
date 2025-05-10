/*check whether the character is vowel or not
*/
#include<iostream>
using namespace std;
bool is_vowel(char vowel[], char ch);
int main()
{
	char vowel[] = "aeiouAEIOU";
	char ch;
	cin >> ch;
	if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
	{
		if (is_vowel(vowel, ch))
			cout << "vowel";
		else
			cout << "consonant";
	}
	else
	{
		cout << "not an alphabet";
	}
	return 0;
}
bool is_vowel(char vowel[],char ch)
{
	int i = 0;
{
		while (vowel[i])
		{
			if (ch == vowel[i])
				return true;
			else
				i++;
		}
	}
	return false;
}