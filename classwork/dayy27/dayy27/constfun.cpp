/*
* array of class
* get biggest of array elements
* get array sorted in assending order
* get array sorted in descending order
*/
#include<iostream>
using namespace std;
class arr
{
	int arry[10];
public:
	int* set_array();
	int* asscending_order(int[],int);
	int* descending_order(int[], int);
	int largest(int[], int);
};
int* arr:: set_array()
{
	for (int i = 0;i < 10;i++)
	{
		cin >> arry[i];
	}
	return arry;
}
int* descending_order(int arry[], int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arry[j] < arry[j])
			{
				arry[i] = arry[j];
				int temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}

		}
	}
	return arry;
}
int* asscending_order(int arry[], int size)
{
	for (int i = 0;i < size-1;i++)
	{
		for (int j = i+1;j < size;j++)
		{
			if (arry[j] >arry[j])
			{
				arry[i] = arry[j];
				int temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}

		}
	}
	return arry;
}
int largest(int arry[], int size)
{
	int largest = arry[0];
	for (int i = 0;i < size;i++)
	{
		if (largest < arry[i])
		{
			largest = arry[i];
		}
	}
	return largest;

}
int main()
{
	arr c;
	int* arry=c.set_array();
	c.asscending_order(arry, 10);
	c.descending_order(arry, 10);
	return 0;
}