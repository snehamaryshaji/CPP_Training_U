#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> user;
	string str;
	while(getline(cin, str))
	{
		if (str == "exit")
		{
			break;
		}
		else if (str.find("visit ")==0)
		{
			user.insert(str.substr(6));
		}
		else if (str == "unique")
			cout << user.size() << endl;
		else if (str == "top")
		{
			for (const string& id : user)
				cout << id << " ";
		}
	}
	return 0;
}