#include<iostream>
#include <set>
#include<string>
using namespace std;
int main()
{
	set<int>book;
	string line="";
	while (line != "exit")
	{
		getline(cin, line);
		if (line.find("book ") != string::npos)
		{
			int time = stoi(line.substr(5));
			if (book.count(time))
			{
				cout << "already booked" << endl;
			}
			else
			{
				book.insert(time);
				cout << "booked" << endl;
			}
		}
		else if (line.find("check ") != string::npos)
		{
			int time = stoi(line.substr(6));
			if (book.count(time))
			{
				cout << "already booked" << endl;
			}
			else {
				cout << "free" << endl;
			}
		}
	}
	return 0;
}
