#include<iostream>
using namespace std;
namespace circle 
{
    const double PI = 3.14;
    double area(double r) 
    { 
        return PI * r * r;
    }
}
namespace square
{
    
    double area(double r) 
    {
        return  r * r;
    }
}
double area(double r)
{
    return  2 * r;
}
int main()
{
    double a = square::area(10);
    cout << a << endl;
    double b = circle::area(10);
    cout << b << endl;
    double c = area(10);
    cout << c << endl;
	return 0;
}