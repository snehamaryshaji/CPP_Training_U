#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from function pointer!" << endl;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}

int main() {
    void (*funcPtr1)() = greet; //void(*fptr)()=greet;
    // function pointer
    funcPtr1(); // calling function through pointer
    int (*funcPtr)(int,int) = add;
    cout<<funcPtr(10,20)<<endl;
    funcPtr = sub;
    cout << funcPtr(10, 20);
    return 0;
}