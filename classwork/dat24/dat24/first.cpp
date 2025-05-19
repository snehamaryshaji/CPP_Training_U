//nested structure
//structure within a structure declaration
#include<iostream>
using namespace std;
struct date
{
	int day, month, year;
};
struct emp
{
	int id;
	string name;
typedef struct addr
	{
		int hsno;
	}ADDR;
	date doj;
};
int main()
{
	struct emp a;
	a.id = 1099;
	a.name = "sneha";
	a.doj.day = 8;
	a.doj.month = 9;
	a.doj.year = 2015;
	a.hsno.addr = 67;
	cout << a.id << endl;
	cout << a.name << endl;

	return 0;
}