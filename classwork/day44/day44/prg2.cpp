#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void disply(bool even,int n)
{
	m.lock();
		int num = 1;
		while (num <= n)
		{
			if (even)
			{
				if (num % 2 == 0)
					cout << num << endl;
				num++;
			}
			else
			{
				if (num % 2 != 0)
					cout << num << endl;
				num++;
			}
	    }
	m.unlock();
}
int main()
{
	thread t1(disply, false,20);
	thread t2(disply, true,20);
	t1.join();
	t2.join();
	return 0;
}