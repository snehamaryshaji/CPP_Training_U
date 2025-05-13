#include<iostream>
using namespace std;
int main()
{
	char line[] = "hi hello";
	char* ptr = line;//declaration with initialization
	while (*ptr)
	{
		cout << *ptr;
		ptr++;
	}
	return 0;
}