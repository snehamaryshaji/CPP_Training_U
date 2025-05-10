#include<iostream>
using namespace std;
int main()
{
	static int num = 1;
	if(num==10)
	return 0;
	cout << num++ << endl;
	main();
}