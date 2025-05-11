/*print max value of unsigned int using ones complement operator*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int max_value = ~0;
	cout << max_value;
	return 0;
}