#include<iostream>
using namespace std;
int main()
{
	/*int n;
	cout << "enter the n";
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		cout << (i * i) - 1<<",";
		
		i++;
	}
	*/
	/*int n;
	cout << "enter the n";
	cin >> n;
	int num = 1;
	for (int i = 1;i <=n;i++)
	{
		
		for (int j=0 ;j < n;j++)
		{
			cout << num;
			if (n)
				cout << "*";
			num++;
		}
		cout << endl;
	}
	*/
	/*int num;
	int sum = 0;
	cout << "enter the num";
	cin >> num;
	for (int i = 0;i < 5;i++)
	{
		int ret = num % 10;

		sum = sum+ ret;
		num = num / 10;
	}
	cout << "sum= " << sum;
	*/
	//qn1
	/*int basic_salary;
	cout << "enter basic salary";
	cin >> basic_salary;
	int hra =basic_salary*0.4;
	int dearness = basic_salary *0.2;
	int total= hra + dearness;
	int gross = basic_salary + total;
	cout << "gross salary=" << gross;
	*/
	//qn2
	/*int selling_price, profit;
	cout << "enter selling price" << endl;
	cin >> selling_price;
	cout << "enter profit" << endl;
	cin >> profit;
	cout << "coast price=" << selling_price - profit << endl;
	*/
	//qn3
	/*float pi = 3.14;
	float rad;
	cout << "enter the radius of the circle" << endl;
	cin >> rad;
	cout << "radius of the circle=" << pi * (rad * rad);
	*/
	/*// reverese the number
	int num,ret;
	int rev = 0;
	cout << "enter the number";
	cin >> num;
	while (num != 0)
	{
		ret = num % 10;
		rev = rev*10 + ret;
		num=num / 10;

	}
	cout << "rev=" << rev;
	*/
	//qn 5 student mark
	/*int arr[5] = {0};
	int sum = 0;
	cout << "enter the 5 sub marks" << endl;
	for (int i = 0;i < 5;i++)
	{
		cin >> arr[i];
		 sum=sum+arr[i];
	}
	cout << "percentage=" << sum/5 ;
	*/
	/*//swap two numbers
	int a = 5;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a=" << a << "b=" << b;
	*/
	//quest2 pattern
   /*int n;
   cout << "enter n value";
   cin >> n;
   for (int i = 0;i <= n;i++)
   {
	   for (int j = 0;j = n - i;j++)
	   {
		   cout << " ";
	   }
	   char ch = 'A';
	   for (int k = 1;k <= i;k++)
	   {
		   cout << ch;
		   ch++;
	   }
	   
	   
   }
   */
//qn3 rectangle pattern
    /*int n;
	cout << "enter n" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/
//qn 10 righttriangle
    /*int n;
	cout << "enter n" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
		}
		cout << endl;

	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - i-1;j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
//qn 3
int n;
cout << "enter n" << endl;
cin >> n;
for (int i = 0;i < n;i++)
{
	for (int j = 0;j < n - i ;j++)
	{
		cout << "*";
	}
	cout << endl;
}




	return 0;

}