#include<iostream>
#include<stack>
#include<string>
using namespace std;
class History
{
	stack<string>backStack, forwardStack;
	string currentPage;
public:
	History() :currentPage("Home") {}
	void visit(const string& url)
	{
		if (!currentPage.empty())
		{
			backStack.push(currentPage);
		}
		currentPage = url;
		while (!forwardStack.empty())
		{
			forwardStack.pop();
		}
		cout << "Current page: " << currentPage << endl;
	}
	void back()
	{
		if (!backStack.empty())
		{
			forwardStack.push(currentPage);
			currentPage = backStack.top();
			backStack.pop();
			cout << "Current page:" << currentPage << endl;
		}
		else
		{
			cout << "No previous page " << endl;
		}
	}
	void forward()
	{
		if (!forwardStack.empty())
		{
			backStack.push(currentPage);
			currentPage = forwardStack.top();
			forwardStack.pop();
			cout << "Current page:" << currentPage << endl;
		}
		else
		{
			cout << "No forward page" << endl;
		}
	}
};
int main()
{
	History b;
	string command, url;
	while (true)
	{
		cout << "Enter command(visit url/back/forward/exit): " << endl;
		cin >> command;
		if (command == "visit")
		{
			cin >> url;
			b.visit(url);
		}
		else if (command == "back")
		{

			b.back();
		}
		else if (command == "forward")
		{

			b.forward();
		}
		else if (command == "exit")
		{
			break;
		}
		else
		{
			cout << "Invalid comment" << endl;
		}
	}
	return 0;
}