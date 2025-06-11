#include <iostream>
#include <thread>
using namespace std;
void backgroundTask() {
    this_thread::sleep_for(std::chrono::seconds(30));
    cout << "Background task done." << std::endl;
}

int main() {
    std::thread t(backgroundTask);
    t.detach(); // Main won't wait
    cout << "Main is not blocked.\n";
    this_thread::sleep_for(std::chrono::seconds(35)); // Wait to see output
    return 0;
}