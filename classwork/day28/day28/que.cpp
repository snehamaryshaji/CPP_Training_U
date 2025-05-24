#include<iostream>
#define CAP 5
using namespace std;
int front = 0;
int rear = 0;
int arr[CAP];
int enque(int);
int deque();
void display();
int main()
{
	enque(5);
	enque(4);
	enque(3);
	enque(37);
	enque(39);
	display();
	deque();
	deque();
	deque();
	deque();
	deque();
	deque();
	display();

	return 0;
}
int enque(int v)
{
	if (rear== CAP)
	{
		cout << "que is empty is full" << endl;
		return 0;
	}
	arr[rear] = v;
	rear++;

	return 0;
}
int deque()
{
	if ((front == CAP)||(front==rear))
	{
		cout << "que is empty" << endl;
		rear = 0;
		front = 0;
		return 0;
	}
	cout << arr[front] << " element removed" << endl;
	front++;
	return 0;
}
void display()
{
	if ((front== rear)||(front==CAP))
	{
		cout << "queu is empty" << endl;
		return;
	}
	cout << "====queue Elements are===" << endl;
	for (int i = front;i < rear;i++)
		cout << arr[i] << endl;

	cout << endl;
}