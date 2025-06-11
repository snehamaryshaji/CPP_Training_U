#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int amt = 0;
mutex m;
void add(int x)
{
	m.lock();
	amt = amt + x;
	cout << "amountadd" << amt << endl;
	/*for (int i = 0;i < 30;i++)
	{

	}*/
	m.unlock();
}
void sub(int x)
{
	m.lock();
	amt =  x-amt;
	cout << "amountsub" << amt << endl;
	m.unlock();
}

int main()
{
	thread t1(add, 150);
	thread t2(sub, 150);
	t1.join();
	t2.join();
	return 0;
}
//#include <iostream>
//#include <thread>
//#include <vector>
//
//int counter = 0; // Shared resource
//
//void increment(int times) {
//    for (int i = 0; i < times; ++i) {
//        ++counter;
//    }
//}
//
//int main() {
//    std::thread t1(increment, 100000);
//    std::thread t2(increment, 100000);
//
//    t1.join();
//    t2.join();
//
//    std::cout << "Final counter (without mutex): " << counter << std::endl;
//    return 0;
//}