#include<iostream>
using namespace std;
int fibanacci(int first, int second,int n);
int main()
{
	int first = 0;
	int second = 1;
	int n;
	cout << "enter nth n" << endl;
	cin >> n;
	int res=fibanacci(0, 1,n);
	cout << "nth number=" <<res<<endl;
	return 0;
}
int fibanacci(int first, int second,int n)
{
	int ret=0;
	int sum=0;
	if (ret == n)
		return sum;
	sum = first + second;
	first = second;
	second = sum;
	ret++;
	fibanacci(second, sum, n);
	return sum;
}