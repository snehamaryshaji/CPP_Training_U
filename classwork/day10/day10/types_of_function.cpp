#include<iostream>
using namespace std;
int add(int v1, int v2); //pass by value
int update_add(int *, int *); //pointer not belong to a particular data type
int result(int &num);//pass by reference
int main()
{
	int a = 9;
	int b = 9;
	int num = 10;
	cout << "prev add of a= " << &a << endl;
	//pass by value
	int sol = add(a, b);
	cout <<"before value of a = "<< a << endl;
	//pass by pointer
	int up_sol= update_add(&a,&b);
	cout << "after value of a = "<<a << endl;
	cout << "after value of b = " << b << endl;
	cout << "solution= " << sol << endl;
	cout << "solution= " << up_sol << endl;
	cout << "add of a= " << &a <<endl;
	cout << "add of a= " << &b <<endl;
	//pass by referenc
	int res = result(num);
	cout << "result= " << res << endl;;
	return 0;
}
int add(int v1, int v2)
{
	return  v1 + v2;
}
int update_add(int *a, int *b)
{
	*a = *a + 2;
	*b = *b + 3;
	cout << "add of b= " << &b << endl;
	cout << "add of a= " << &b << endl;
   int res= *a + *b;
   return res;
}
int result(int& num)
{

	int res = num + 5;
	return res;
}