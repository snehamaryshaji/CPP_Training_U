#include<iostream>
using namespace std;
int main()
{
	/*int a, b, c, d, e;
	cin >> a;
	cin >> b;
	cin >> c >> d >> e;
	int large = a;
	if (large < b)
	{
		large = b;
	}
	if (large < c)
	{
		large = c;
	}
	if (large < d)
	{
		large = d;
	}
	if (large < e)
	{
		large = e;
	}
	cout << large;*/




	//find the even numbers between start range and end range

	/*int start_range;
	int end_range;
	cin >> start_range;
	cin >> end_range;
	int i = 0;
	for (i= start_range;i <= end_range;i++)
	{
	if(i % 2==0)
		{
			cout << i << endl;;
		}
	}*/


	/*//FIND THE ASII VALUE
	char ch;
	cin >> ch;
	printf("%d\n",ch);
	cout << (int)ch;
	*/

	//check if a given character is consonent or vowel
	char ch;
	cin >> ch;
	if ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
	{
		cout << "it is vowel";
	}
	else
	{
		cout << "it is not a vowel";
	}
	return 0;
}