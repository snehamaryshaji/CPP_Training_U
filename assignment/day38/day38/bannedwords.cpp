#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> banned_words = { "bad", "evil", "vulgar" };
	string text = "this is a bad example with evil words";
	for (string w : banned_words)
	{
		auto pos = text.find(w);
		if (pos != string::npos)
			text.erase(pos, w.size() + 1);
	}
	cout << text;
}