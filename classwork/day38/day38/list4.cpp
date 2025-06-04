/*#include<iostream>
#include <list>
#include <string>
using namespace std;
class taskmanager {
	list<string>task;
	string tasks;
public:
	taskmanager(string task) :tasks(tasks) {}
	void addAtEnd()
	{
		task.push_back(tasks);
	}
	void urgent()
	{
		task.push_front(tasks);
	}

};
int main()
{
	taskmanager t("urgent system issues");
	
	return 0;
}

#include<iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
	list<string>task;
	string tasks;
	while (1)
	{
		getline(cin, tasks);
		if (tasks == "exit")
		{
			break;
		}
		else if ((tasks.find("critical")) || (tasks.find("urgent")))
		{
			tasks.erase(1, 7);
			task.push_front(tasks);
		}
		else if (tasks.find("add"))
		{
			tasks.erase(3, 1);
			task.push_back(tasks);
		}
		else if (tasks.find("remove"))
		{
			tasks.erase(1, 7);
			task.remove(tasks);
		}
		else {
			cout << "invalid output " << endl;
		}
	}
	cout << "List after insertions:\n";
	for (auto x : task)
		cout << x << endl;
	cout << "\n";
	return 0;
}
*/
#include<iostream>
#include <list>
#include <string>
using namespace std;
class taskmanager
{
	list<string>task;
public:
	void commands(const string& input)
	{
		string command = input.substr(0, input.find(" "));
		string tasks = input.substr(input.find(" ") + 1);
	    if (command=="critical" || command=="urgent")
		{
			task.push_front(tasks);
		}
		else if (command=="add")
		{
			task.push_back(tasks);
		}
		else if (command=="remove")
		{
			task.remove(tasks);
		}
		else if(command=="show")
		{ 
			cout << "List after insertions:\n";
			for (auto x : task)
				cout << x << endl;
			cout << "\n";
		}
	}


};
int main()
{
	taskmanager t;
	string input;
	cout << "to exit" << endl;
	while (1)
	{
		getline(cin, input);
		if (input == "exit")
		{
			break;
		}
		else {
			t.commands(input);
		}
	}
	return 0;
}