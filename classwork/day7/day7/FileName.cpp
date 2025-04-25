#include<iostream>
using namespace std;
#define MAXBITES 10
int main()
{
	cout << "hello";
	//exit controll loop do whie
	int taste = 0;
	int plateempty = MAXBITES;
	do {
		cout << "have a byte of the food" << endl;
		plateempty--;
		cout << "how is the taste of the food(0/1)" << endl;
		cin >> taste;
	} while ((taste > 0) && (plateempty > 0));
	if (plateempty == 0)
	{
		cout << "the plate is empty and food was awesom" << endl;
	}
	if (taste == 0)
	{
		cout << "taste was not good enough after having " << MAXBITES - plateempty << endl;
	}

	return 0;
}