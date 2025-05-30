#include <iostream>
using namespace std;

template <typename T,class T2>
class Box {
    T value;
    T2 v2
public:
    Box(T val,t2 val1) : value(val),v2(val1) {}
    void show() {
        cout << "Value: " << value << endl;
        cout << "Value: " << v2<< endl;
    }
};

int main() {
    Box<int,float> intBox(10,67.0);
    Box<string,int>strBox("Hello Template",90);
    Box<float> floatBox(10.44);

    intBox.show();
    strBox.show();
    floatBox.show();

    return 0;
}