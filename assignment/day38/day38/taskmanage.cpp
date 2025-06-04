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
	void moveUp()
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


};
int main()
{
	return 0;
}
