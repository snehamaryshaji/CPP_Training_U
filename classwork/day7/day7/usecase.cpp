#include<iostream>
using namespace std;
#define NORMAL_CONTENT 10
int main()
{
	char confirm;
	int additional = NORMAL_CONTENT;
	do 
	{
		cout <<NORMAL_CONTENT <<"ml "<< endl;
		cout << "do yo need to add more(y/n)" << endl;
		cin >> confirm;
	}
	while (confirm != 'y'&& confirm != 'Y');
	if (confirm == 'y')
	{
		additional=additional + 5;
		cout << "total content="<<additional << endl;
	}
	else
	{
		cout << "total content=" << additional << endl;
	}
	return 0;
}