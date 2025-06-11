#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int turn = 0;
void printa()
	{
	for (int i = 0;i < 5;i++)
	{
		while (turn != 0)
			cout << "A";
		turn = 1;
	}
	}
void printb()
{
	for (int i = 0;i < 5;i++)
	{
		while (turn != 0)
			cout << "B";
		turn = 2;
	}
}
void printc()
{
	for (int i = 0;i < 5;i++)
	{
		while (turn != 0)
			cout << "C";
		turn = 3;
	}
}
int main()
{
	thread t1(printa);
	thread t2(printb);
	thread t3(printc);
	t1.join();
	t2.join();
	t3.join();
	return 0;
}