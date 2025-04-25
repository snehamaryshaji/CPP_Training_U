/*
* problem 2
* digits frequency counter
*/
#include <iostream>
using namespace std;
//int get_dig(int num);
int main()
{
	int num;
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	cout << "enter the number" << endl;
	cin >> num;
	int numa = num;

		//int ret = get_dig(num);
		
while (num != 0)
{
	int i = 10;
	int ret = num % 10;
	switch (ret)
	{
	case 0:
		num0++;
		break;
	case 1:
		num1++;
		break;
	case 2:
		num2++;
		break;
	case 3:
		num3++;
		break;
	case 4:
		num4++;
		break;
	case 5:
		num5++;
		break;
	case 6:
		num6++;
		break;
	case 7:
		num7++;
		break;
	case 8:
		num8++;
		break;
	default:
		break;
		num9++;
	}


	num = num / 10;
}
cout << "0:" << num0 << endl;
cout << "1:" << num1 << endl;
cout << "2:" << num2 << endl;
cout << "3:" << num3 << endl;
cout << "4:" << num4 << endl;
cout << "5:" << num5 << endl;
cout << "6:" << num6 << endl;
cout << "7:" << num7 << endl;
cout << "8:" << num8 << endl;
cout << "9:" << num9 << endl;
return 0;
}