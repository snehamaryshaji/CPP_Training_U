#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i, countodd, counteven;
	for (i = 0,countodd=0;i < 10;i++)
	{
		if (i % 2 != 0)
		{
			arr[countodd] = i;
			countodd++;
		}
	}
	for ( i = 0,counteven=countodd;i < 10;i++)
	{
		if (i % 2 == 0)
		{
			arr[counteven] = i;
			counteven++;
		}
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}