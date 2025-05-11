/*using function find the middle value*/
#include<iostream>
using namespace std;
int middle(int, int, int);
int main()
{
	int num1, num2, num3;
	//cout << "enter num1,num2,num3" << endl;
	cin >> num1 >> num2 >> num3;
	int res = middle(num1, num2, num3);
	cout << "the middle value is" << res << endl;

}
int middle(int a, int b, int c)
{
	if ((a > b && a < c) || (a<b && a>c))
	{
		return a;
	}
	else if ((b > a && b < c) || (b < a && b > c))
	{
		return b;
	}
	else
	{
		return c;
	}
}