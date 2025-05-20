#include<iostream>
#include<cstring>
using namespace std;
union emp
{
	int id;
	char name[20];
};
int main()
{
	emp e;
	e.id = 10;
	cout << e.id << endl;
	strcpy(e.name, "sneha");
	//cout << e.name << endl;
	return 0;
}