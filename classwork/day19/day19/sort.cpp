#include<iostream>
using namespace std;
int getvalues(int*, int);
int sortasc(int*, int);
void display(int*, int);
int swap(int&,int&);
int* create_fun(int*, int);

int main()
{
	int* ptr = nullptr;
	int n;
	cin >> n;
	create_fun(ptr,n);
	getvalues(ptr, n);
	sortasc(ptr, n);
	return 0;
}
int* create_fun(int* ptr ,int n)
{
	int elements = 5;
	ptr = (int*)malloc(sizeof(int) *n);
	
}
int getvalues(int* ptr, int n)
{
	int* temp = nullptr;
	temp = ptr;
	for (int i = 0;i < n;i++)
	{
		cout << "enter the " << i + 1 << "value" << endl;
		cin >> *ptr++;
	}
	ptr = temp;
	
}
int sortasc(int* ptr, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (ptr[i] < ptr[j])
			{
				swap(ptr[i], ptr[j]);
			}
		}
	}
}
int swap(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void display(int* ptr, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << (i + 1) << " value=   " << *ptr++ << endl; //traversing through the elements
	}
}
