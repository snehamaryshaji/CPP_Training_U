#include<iostream>
using namespace std;
//ba+c*sizeof(dt)+c*sizeof dt
int main()
{
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};//col value is the necessity
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << (unsigned int) & a[i][j] << "       " << a[i][j] << endl;
		}
	}
	int* ptr = a[0];
	return 0;
}