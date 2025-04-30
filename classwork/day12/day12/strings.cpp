/*string -collection of char
* each character in array of character representing col,
if it is single dimention means 1 row with mul col
string should end with null
segmentation fault,core dump
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[10];//1 row with 10 col
	char str1[20], str2[20], str3[30];
	strcat(strcat(strcpy(str1, "sneha"), "mary"), "shaji");
	printf("\nstr1: %s\n", str1);
	return 0;
}