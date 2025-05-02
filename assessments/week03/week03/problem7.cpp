/*problem7 comma seperator
*/
#include<iostream>
using namespace std;
int comma(char src[], int arr[])
{
	int index = 0;int num = 0;
	for (int i = 0;src[i]!= '\0';i++)
	{
		if (src[i] >= '0' && src[i] <= '9')
		{
			num = num * 10 + (src[i] - '0');
		}
		else if(src[i]==',')
		{
			arr[index] = num;
			index++;
			num = 0;
		}
	}
	arr[index] = num;
	index++;
	return index;
}
int count(int num, int arr[], int length)
{
	int count = 0;
	for (int i = 0;i < length;i++)
	{
		if(arr[i]==num)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char first[100], second[200];
	int arr1[100],arr2[100];
	int size1;
	int size2;
	cin.getline(first, 100);
	cin.getline(second, 200);
	size1 = comma(first, arr1);
	size2 = comma(second, arr2);
	for (int i = 0;i < size1;i++)
	{
		int n = arr1[i];
		int c = count(n, arr2,size2);
		cout << n << "-" << c << endl;

	}

		return 0;
}