#include <iostream>
using namespace std;
class  A
{
public:
    void dispa()
    {
        cout << "a is called " << endl;
    }
};
class B :virtual  public A
{
public:
    void dispb()
    {
        cout << "b is called " << endl;
    }
};
class C :virtual  public A
{
public:
    void dispc()
    {
        cout << "c is called " << endl;
    }
};
class D :public B, public C
{
public:
    void dispd()
    {
        cout << "d is called " << endl;
    }
};

int main() {
    D objd;
    objd.dispb();
    objd.dispc();
    objd.dispa();

    return 0;
}