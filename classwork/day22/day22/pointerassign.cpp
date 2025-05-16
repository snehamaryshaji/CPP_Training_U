#include<iostream>
using namespace std;
void find_cons(char* str)
{
	int end = 0;
	while (str[end])
	{
		end++;
	}
	end--;
}
int main()
{
	char str[100];
	cin.getline(str, 100);
	find_cons(str);
	return 0;
}