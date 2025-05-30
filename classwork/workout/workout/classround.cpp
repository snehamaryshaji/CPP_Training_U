#include<iostream>
using namespace std;
class task
{
public:
	string name;
	int bursttime;
	task* next;
	task(string n, int b)
	{
		name = n;
		bursttime = b;
		next = nullptr;

	}
};
int main()
{
	return 0;
}