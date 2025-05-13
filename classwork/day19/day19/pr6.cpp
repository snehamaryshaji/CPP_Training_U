#include<iostream>
using namespace std;
int main()
{
	//int *ptr = (int *)malloc(10); //malloc,calloc,realloc will give unnamed address
	int* ptr = (int *)malloc(sizeof(int)*3);
	int* temp = ptr;
	cout << "address of ptr " <<(unsigned long int)ptr << endl;
	*ptr = 202;
	cout << *ptr << endl;
	ptr++;
	cout <<"address of ptr " << (unsigned long int)ptr << endl;
	*ptr = 301;
	ptr++;
	cout <<"address of ptr " << (unsigned long int)ptr << endl;
	*ptr = 401;
	ptr = temp;//before printing resign the ba to ptr
	cout << *ptr++ << endl;
	cout << *ptr++ << endl;
	cout << *ptr++ << endl;
	return 0;
}