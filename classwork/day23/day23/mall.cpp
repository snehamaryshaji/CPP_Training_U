#include<iostream>
#include<cstdlib>
//using static will  fix dangling pointer issue
using namespace std;
int main()
{
	int* ptr = (int*)malloc(sizeof(int) * 3);
	int* temp = ptr;
	for(int i = 0;i < 3;i++)
	{
		cin >> *(ptr+i);
	}
	ptr = temp;
	for (int i = 0;i < 3;i++)
	{
		cout<< *temp<<"     ";
		temp++;
	}
	//memory leaks
	free(ptr);
	return 0;
}