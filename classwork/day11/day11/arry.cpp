/*demo of an array*/
#include<iostream>
using namespace std;
int main()
{
	//static array----memory allocated at the compile time
	int arr[3];
	cout << "capacity of the array" << sizeof(arr) << endl;
	cout << "address of arr[0]=" << &arr[0] << endl;
	cout << "address of arr[1]=" << &arr[1] << endl;
	cout << "address of arr[2]=" << &arr[2] << endl;
	cout << "address of arr[2]=" << (unsigned long) & arr[2] << endl;
	printf ("address of arr[0]=%u\n", &arr[0]);
	printf ("address of arr[1]=%u\n", &arr[1]);
	printf ("address of arr[2]=%u\n", &arr[2]);
	return 0;
}