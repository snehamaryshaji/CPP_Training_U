#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0; 
mutex m;

void increment(int times) {
    m.lock();
    for (int i = 0; i < times; ++i) {
        ++counter;
    }
    m.unlock();
}

int main() {
    std::thread t1(increment, 1000);
    std::thread t2(increment, 1000);

    t1.join();
    t2.join();

    std::cout << "Final counter : " << counter << std::endl;
    return 0;
}