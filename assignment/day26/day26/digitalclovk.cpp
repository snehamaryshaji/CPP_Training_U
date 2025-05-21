#include<iostream>
using namespace std;
class clock
{
	int hour;
	int min;
	int second;
public:
	void set_time();
	void tik();
};
void clock:: set_time()
{
	cout << "enter the hour" << endl;
	cin >> hour;
	cout << "enter the min" << endl;
	cin >> min;
	cout << "enter the sec" << endl;
	cin >> second;

}
int main()
{
	return 0;
}