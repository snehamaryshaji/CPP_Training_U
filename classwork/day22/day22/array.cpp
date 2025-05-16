#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << a;
	int arr[5] = { 3,4,5,6,7 };
	int* ptr = nullptr;
	ptr = arr;
	ptr = ptr++;
	cout << *ptr << endl;
	cout << *ptr+1 << endl;
	return 0;
}
