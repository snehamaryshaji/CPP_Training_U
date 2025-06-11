#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void first(int x,int y)
{
	m.lock();
	for (int i = x;i <= y;i++)
	{
		cout << i << endl;
	}
	m.unlock();
}
int main()
{
	thread t1(first,1, 10);
	thread t2(first,10, 20);
	t1.join();
	t2.join();
	return 0;
}