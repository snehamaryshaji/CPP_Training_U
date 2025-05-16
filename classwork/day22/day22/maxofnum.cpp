//max of 2 numbers
#include<iostream>
using namespace std;
void func(int* num1, int* num2,int* res)
{
	/*if (*num1 > *num2)
		*res = *num1;
	else
		*res = *num2;
		*/
		
}
int function(int* num1, int* num2)
{
	
	return (*num1 > *num2) ? (*num1) : (*num2);
}
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	//int res = 0;
	//func(&num1, &num2,&res);
	cout<<function(&num1, &num2);

	
	//cout << res;
return 0;
}
