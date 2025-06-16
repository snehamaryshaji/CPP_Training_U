#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
//template<typename T>
//void print(deque<T> de)
//{
//	for (const auto& i : de)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
void print(deque<int>& de)
{
	for (auto i = 0;i < de.size();i++)
	{
		cout << de[i] << " " ;
	}
	cout << endl;
}
void print(deque<string>& de)
{
	for (auto i = 0;i < de.size();i++)
	{
		cout << de[i] << " ";
	}
	cout << endl;
}
int main()
{
	deque<int>we;
	we.push_back(12);
	we.push_front(24);
	we.resize(16, 99);
	print(we);
	we.erase(we.begin() +1);
	print(we);
	deque<string>sv;
	we.push_front(14);
	we.push_front(34);
	sort(we.begin(), we.end());
	print(we);
	cout << we.max_size() << endl;
	cout << we.size() << endl;
	we.resize(20);
	cout << we.size() << endl;
	sv.push_back("sneha");
	sv.push_back("vismaya");
	print(sv);
	return 0;
}