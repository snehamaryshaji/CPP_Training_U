#include<iostream>
#include<list>
#include<string>
using namespace std;
class textEditor
{
	list<string>buffer;
	list<string>::iterator cursor;
public:
	textEditor()
	{
		cursor = buffer.begin();
	}
	void insert(const string& line)
	{
		cursor = buffer.insert(cursor, line);
		++cursor;
	}
	void moveUp()
	{
		if (cursor != buffer.begin())
		{
			--cursor;
		}
	}
	void movedown()
	{
		if (cursor != buffer.end())
		{
			++cursor;
		}
	}
	void print()const {
		for (const auto& x : buffer)
		{
			cout << x << endl;
		}
	}
	void process(const string& input)
	{
		if (input.find("insert") == 0)
		{
			string line = input.substr(7);
			insert(line);
		}
		else if (input == "up")
			moveUp();
		else if (input == "down")
			movedown();
		else if (input == "print")
			print();

	}


};
int main()
{
	textEditor t;
	string command;
	while (getline(cin, command))
	{
		if (command == "exit")
			break;
		t.process(command);
	}

	return 0;
}
