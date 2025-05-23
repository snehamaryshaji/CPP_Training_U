#include <iostream>
using namespace std;
class stack
{
	int *arr;
	int top;
	int bottom;
	int max;
public:
	stack();
	int push(int);
	int pop();
	void display();
};
stack::stack()
{
	max = 10;
	arr = new int[max];
	top = -1;
	bottom = -1;

}
int stack:: push(int v)
{
	if (top == max- 1)
	{
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;

	return 0;
}
int stack:: pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << " got popped out" << endl;
	top--;
	return 0;
}
void stack:: display()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top;i >= 0;i--)
		cout << arr[i] << endl;

	cout << endl;
}
int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.display();


	s.pop();
	s.pop();
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	//display();
}
