#include<iostream>
using namespace std;
class elements
{
	int* arr;
	int size;
	int cap;
public:
	elements();
	int push_back(int);
	int biggest();
	bool sortAsc();
	bool sortDesc();
	void printArray();
	int getSize() const;
	int getCapacity() const;
	int resize();
};
elements::elements()
{
	size = 0;
	cap= 1;
	arr = new int[cap];
}
int elements::push_back(int a)
{
	if (size == cap)
	{
		resize();
	}
		arr[size++] = a;
		return 0;
}
int elements:: resize()
{
	cap = cap * 2;
	int* temp = new int[cap];
	for (int i = 0;i < size;i++)
	{
		temp[i] = arr[i];
	}
	cout <<"tempr"<< temp << endl;
	cout<<"arrayy" << arr << endl;
	delete[] arr;
	arr = temp;
	return 0;
}
int  elements::biggest()
{
	int large = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (large < arr[i])
		{
			large = arr[i];
		}
	}
	return large;
}
bool elements:: sortAsc()
{
	if (size == 1)
		return true;
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return true;
}
bool elements:: sortDesc()
{
	if (size == 1)
		return true;
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return true;
}
void elements::  printArray()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int elements::getSize() const
{
	return size;
}
int elements:: getCapacity() const
{
	return cap;
}
int main()
{
	elements e;
	e.push_back(10);
	e.push_back(30);
	e.push_back(15);
	e.printArray();
	cout << "biggest = "<<e.biggest() << endl;
	cout << "ascending order " << endl;
	e.sortAsc();
	e.printArray();
	cout << "descending order = " << endl;
	e.sortDesc();
	e.printArray();
	cout << "size " << e.getSize()<< endl;
	cout<<"capacity "<<e.getCapacity()<<endl;

	return 0;
}