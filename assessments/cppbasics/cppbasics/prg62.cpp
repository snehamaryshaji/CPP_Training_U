//vowel removal
#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;
int main()
{
	char name[MAX];
	cin.getline(name, 200);
	char str2[] = "aeiouAEIOU";
	int i = 0;
	int j = 0;
	while (name[i])
	{
		if (!strchr(str2, name[i]))
		{
			name[j++] = name[i];
		}
		i++;
	}
	name[j] = '\0';
	cout << name;
	return 0;
}