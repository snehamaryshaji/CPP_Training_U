/*#include<iostream>
using namespace std;
template <class T, class T2>
class calculator {
    T v1;
    T2 v2;
public:
    calculator(T val1, T2 val2) : v1(val1), v2(val2) {}
    void show() {
        cout << "sum: " << v1+v2 << endl;
        cout << "value: " <<v1- v2 << endl;
        cout << "product " << v1 * v2 << endl;
    }
};
int main()
{
    calculator<int,float> intBox(10, 67.0);
    intBox.show();
	return 0;
}*/
#include<iostream>
using namespace std;
template <class T, class T2>
class calculator {
    T v1;
    T2 v2;
public:
    calculator(T val1, T2 val2) : v1(val1), v2(val2) {}
    void show() {
        cout << "sum: " << v1 + v2 << endl;
        cout << "value: " << v1 - v2 << endl;
        cout << "product " << v1 * v2 << endl;
    }
};
int main()
{
    calculator<int,float> intBox(10, 67.0);
    intBox.show();
    return 0;
}