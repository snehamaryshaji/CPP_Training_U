#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int num = 1;
const int n = 30;
mutex m;
void fiz()
{
	while (num <= n)
	{
		m.lock();
		if (num % 3 == 0 && num % 5 != 0)
		{
			cout << "fizz" << endl;
			num++;
		}
		m.unlock();
	}
}
void buz()
{
	while (num <= n)
	{
		m.lock();
		if (num % 5 == 0 && num % 3!= 0)
		{
			cout << "buzz" << endl;
			num++;
		}
		m.unlock();

	}
}
void fizbuz()
{
	while (num <= n)
	{
		m.lock();
		if (num % 3 == 0 && num % 5 != 0)
		{
			cout << "fizbuzz" << endl;
			num++;
		}
		m.unlock();

	}
}
void number()
{
	while (num <= n)
	{
		m.lock();
		if (num % 3 != 0 && num % 5 != 0)
		{
			cout << num<< endl;
			num++;
		}
		m.unlock();

	}
}
int main()
{
	thread t1(fiz);
	thread t2(buz);
	thread t3(fizbuz);
	thread t4(number);
	t1.join();
	t2.join();
	t3.join();
	t4.join();


	return 0;
}