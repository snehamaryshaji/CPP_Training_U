/*check whether the primitive values crossing the limit or not*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	char b;
	float c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a<INT_MIN || a>INT_MAX)
	{
		cout << "int crossing limit" << endl;
	}
	else
	{
		cout << "int within the limit" << endl;
	}
	if (b<CHAR_MIN || b>CHAR_MAX)
	{
		cout << "char crossing limit" << endl;
	}
	else
	{
		cout << "char within the limit" << endl;
	}
	if (c<FLT_MIN || c>FLT_MAX)
	{
		cout << "float crossing limit" << endl;
	}
	else
	{
		cout << "float within the limit" << endl;
	}
	return 0;
}