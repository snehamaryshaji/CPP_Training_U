//triangle values
#include<iostream>
using namespace std;
bool triangle(int angle1, int angle2, int angle3)
{
	if (angle1 + angle2 + angle3 == 180)
		return true;
	else
		return false;
}
int main()
{
	int angle1, angle2, angle3;
	cout << "enter three angle values" << endl;
	cin >> angle1 >> angle2 >> angle3;
	if (triangle(angle1, angle2, angle3))
		cout << "can make triangle with these values" << endl;
	else
		cout << "cant make triangle with these values" << endl;
	return 0;
}