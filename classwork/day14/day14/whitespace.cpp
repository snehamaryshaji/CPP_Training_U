#include<iostream>
using namespace std;
void ltrim(char name[], char str1[])
{
	int j = 0;
	int i = 0;
	while (name[i] == ' ')
	{
		i++;
	}
	while (name[i])
	{
		str1[j] = name[i];
		i++;
		j++;
	}
	str1[j] = '\0';
	cout << str1 << endl;
		
	
}
void rtrim(char name[], char str2[])
{
	int i = 0;
	while (name[i])
	{
		str2[i] = name[i];
		i++;
	}
	str2[i] = '\0';
	int end = i - 1;
	while (end >= 0 && str2[end]=='_')
	{
		end--;
	}
	str2[end + 1] = '\0';
	cout << str2<<endl;
}
int main()
{
	char name[200];
	char str1[200];
	char str2[200];
	cin.getline(name, 200);
	ltrim(name, str1);
	rtrim(name, str2);
	//cout << name<<endl;
	return 0;
}