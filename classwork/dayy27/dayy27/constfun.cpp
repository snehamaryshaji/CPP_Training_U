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
	int* asscending_order(int*,int);
	int* descending_order(int[], int);
	int largest(int[], int);
	void disply(int[]);
};
/*arr::arr()
{
	cout << "enter the size of the array" << endl;
	cin >> size;
	cout << "enter the " << size << " elements" << endl;
	cout << "enter elements" << endl;
	   arry = new int[size];
	for (int i = 0;i < size;i++)
	{
		cin >> arry[i];
	}

}
*/
int* arr::set_array()
{
	cout << "enter elements" << endl;
	for (int i = 0;i < 10;i++)
	{
		cin >> arry[i];
	}
	return arry;
}

int* arr:: descending_order(int arry[], int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arry[i] < arry[j])
			{
				
				int temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}

		}
	}
	return arry;
}
int* arr::asscending_order(int* arry, int size)
{
	for (int i = 0;i < size-1;i++)
	{
		for (int j = i+1;j < size;j++)
		{
			if (arry[i] >arry[j])
			{
				int temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}

		}
	}
	return arry;
}
int arr:: largest(int arry[], int size)
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
void arr:: disply(int b[])
{
	for (int i = 0;i < 10;i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
int main()
{
	arr c;
	int* arrys=c.set_array();
	c.disply(c.asscending_order(arrys,10));
	c.disply(c.descending_order(arrys,10 ));
	cout<<c.largest(arrys, 10)<<endl;
	return 0;
}