/*find the area and circumference of a circle*/
#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
	int rad, area, cir;
	cin >> rad;
	cout << "area " << PI * rad * rad<<endl;
	cout << "circumference " << 2 * PI * rad;
	return 0;
}