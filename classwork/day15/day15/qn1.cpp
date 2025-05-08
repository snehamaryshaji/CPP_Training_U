#include<iostream>
#define PI 3.14
using namespace std;
void menu(int ch);
void triangle(int,int);
void rectangle(int,int);
void circle(int);
void square(int);
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int ch = atoi(argv[1]);
		menu(ch);
	}
	else
	{
		menu(-1);
	}
	return 0;

}
int display()
{
	cout << "menu:\n1.triangle\n2.rectangle\n3.circle\n4.square\n" << endl;
	int ch;
	cout << "enter the choice" << endl;
	cin >> ch;
	return ch;
}
void menu(int ch)
{
	if (ch == -1)
	{
		ch = display();
	}
	switch (ch)
	{
	default:
		cout << "incorrect option" << endl;
		break;
	case 1:
		int b, h;
		cout << "enter the b ans h" << endl;
		cin >> b >> h;
		triangle(b,h);
		break;
	case 2:
		int b, h;
		cout << "enter the b ans h" << endl;
		cin >> b >> h;
		rectangle(b,h);
		break;
	case 3:
		int r;
		cout << "enter the r" << endl;
		cin >> r;
		circle(r);
		break;
	case 4:
		int a;
		cout << "enter the a" << endl;
		cin >> a;
		square(a);
		break;
	}

}
void triangle(int b,int h)
{
	cout<<"area of triangle = "<< (b * h) / 2;
}
void rectangle(int b,int h)
{
	cout << "area of rectangle = " << b * h << endl;
}
void circle(int r)
{
	cout << "area of circle = " << PI * (r * r) << endl;
}
void square(int a)
{
	cout << "area of square = " << a * a << endl;
}