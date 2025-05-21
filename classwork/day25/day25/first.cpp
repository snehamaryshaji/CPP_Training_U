#include<iostream>
using namespace std;
typedef struct employee
{
	int id;
	string name;
	string designation;
	struct  date
	{
		int day, month, year;
	}DATE;
}	EMP;
void get_details(EMP* e);
void display(EMP* e);


int main()
	{
	    employee e[100];
		get_details(&e[0]);
		display(&e[0]);
		return 0;
	}
void get_details(EMP* e)
{
	cout << "enter employee id" << endl;
	cin >> e->id;
	cout << "enter employee name" << endl;
	cin >> e->name;
	cout << "enter employee designation" << endl;
	cin >> e->designation;
}
void display(EMP* e)
{
	cout << "employee details" << endl;
	cout << "name: " << e->name << endl;
	cout << "id: " << e->id << endl;
	cout << "designation: " << e->designation << endl;
}