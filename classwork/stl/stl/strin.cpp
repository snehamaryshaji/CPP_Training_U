#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "sneha mary shaji";
	int pos = (str.find("mary"));
	if(pos!=string::npos)
	{
		cout << "position = " << pos << endl;
	}
	cout << str.size() << endl;
	cout << str.length() << endl;
	//string s;
	
	string sub = str.substr(6, 4);
	cout << sub << endl;
	return 0;
}