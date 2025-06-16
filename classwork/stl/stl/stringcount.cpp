#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string s2 = "aeiouAEIOU";
	getline(cin, s);
	int count = 0;
	for (int i = 0;i < s.size();i++)
	{
		char c = s[i];
		if (c == 'a' || c == 'e');
		/*if (s2.find(c)!= string::npos)
			count++;*/
	}
	for (char i : s)
	{
		//char c = s[i];
		tolower(i);
	}
	cout << count << endl;
	return 0;
}