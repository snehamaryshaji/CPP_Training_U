#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif
#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 12,45,89,77,44,98,33 };
	constexpr int no_of_ele = sizeof(arr) / sizeof(arr[0]);//qualifier expression evaluated at the compilation time
	cout << "number of elements" << no_of_ele;
	int output_arr[no_of_ele];
	int odd = 0;
	int even = no_of_ele-1;
	for (int i = 0;i < no_of_ele;i++)
	{
		if (arr[i] % 2 != 0)
		{
			output_arr[odd++] = arr[i];
		}
		else
		{
			output_arr[even--] = arr[i];
		}
	}
	for (int i = 0;i < no_of_ele;i++)
	{
		cout << output_arr[i] << endl;
	}
	return 0;
}