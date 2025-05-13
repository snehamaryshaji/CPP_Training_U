#include<iostream>
using namespace std;
int main()
{
	int a[3] = { 10, 20, 30 };
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
	int* ptr = nullptr;
	ptr = &a[0]; //ptr=&*(a+0); //ptr=a;
	cout << *ptr << endl;
	ptr = &a[1]; //ptr=a+1;
	cout << *ptr << endl;
	ptr = &a[2];  //ptr=a+2;
	cout << *ptr << endl;
	ptr = a + 2; //ba +2 is 2nd location
	cout << *ptr << endl;
	ptr = ptr - 1; //here ptr is addressof 2nd element 
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	return 0;
}
