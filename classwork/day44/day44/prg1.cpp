#include <iostream>
#include <thread>
using namespace std;

void greet() {
    cout << "Hello from thread!\n";
}
void disply(int x)
{
    cout << "x  ==  " << x << endl;

}
void modify(int& x)
{
    x = x * x;
}

int main() {
    thread t(greet);
    t.join();
    cout << "end of the program" << endl;
   //join will attach a process to the main thread so the main
   //thread has to wait until t1 thread completes
    thread t2(disply, 101);
    t2.join();
    int val = 10;
    thread t3(modify, ref(val));
    cout << val << endl;
    t3.join();
    cout << val << endl;
   return 0;
}