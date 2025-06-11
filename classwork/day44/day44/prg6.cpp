#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int num = 1;
mutex m;
void print_odd()
{
	while (num <20)
	{
		m.lock();
		if ((num & 1) == 1)
		{
			cout << num << " ";
			num++;
		}
		m.unlock();
	}
}
void print_even()
{
	while (num < 20)
	{
		m.lock();
		if ((num & 1 )== 0)
		{
			cout << num << " ";
			num++;
		}
		m.unlock();
	}
}

int main()
{
	thread t1(print_odd);
	thread t2(print_even);
	t1.join();
	t2.join();

	return 0;
}