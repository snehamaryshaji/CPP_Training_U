#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	int* temp = nullptr;
	int elements = 5;
	ptr = (int*)malloc(sizeof(int) * elements);
	temp = ptr;
	for (int i = 0;i < elements;i++)
	{
		cout << "enter the " << i + 1 << "value" <<endl;
		cin >> *ptr++;
	}
	ptr = temp;
	for (int i = 0;i < elements;i++)
	{
		cout << (i + 1) << " value=   " << *ptr++ << endl; //traversing through the elements
	}
	ptr = temp;
	for (int i = 0;i < elements;i++)
	{
		cout << (i + 1) << " value=   " << ptr[i] << endl; //traversing through the elements
	}
	return 0;
}