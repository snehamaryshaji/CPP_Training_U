#include<iostream>
#include<thread>
#include<string>
#include<mutex>
using namespace std;
mutex m;
class counter
{
	int x;
public:
	counter() :x(0) {}
	void increment(const string tName)
	{
		for (int i = 0;i < 5;i++)
		{
			m.lock();
			x += 2;
			cout << x << endl;
			m.unlock();
		}
	}
	int getX()
	{
		return x;
	}
};
int main()
{
	counter c;
	thread t1(&counter::increment,&c, "Thread 1");
	thread t2(&counter::increment, &c, "Thread 2");
	t1.join();
	t2.join();
	//c.increment("Thread 1");


	cout << c.getX() << endl;
	return 0;
}