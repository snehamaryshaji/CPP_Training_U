#include<iostream>
using namespace std;
void space(char str1[])
{
	int i = 0;
	int j = 0;
	while (str1[i])
	{
		if (str1[i] == ' ')
		{
			i++;
		}
		else
		{
			str1[j++] = str1[i++];
		}
	}
	str1[j] = '\0';
	cout << str1 << endl;
}
int main()
{
	char str[100];
	cin.getline(str, 100);
	space(str);
	cout << str;
	return 0;
}
/*
* for(int i=0;i<strlen(str1);i++)
* {
   if (str[i]==' ')
   {
   continue;    //it will skip 
   }
   else
   {
   str[j++]=str[i];
   }
   }
   str[j]='\0';
*/