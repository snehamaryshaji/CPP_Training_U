#include<iostream>
using namespace std;
 char* reverse(char* str)
{
	 char* first = str;
	 char* end = str;
	 while (*end)
	 {
		 end++;
		 
	 }
	 end--;
	 while (first<end)
	 {
		 char temp = *first;
		 *first = *end;
		 *end = temp;
		 first++;
		 end--;
	 }
	 return str;

}
int main()
{
	char str[100];
	cin.getline(str, 100);
	cout << reverse(str);;
	return 0;
}