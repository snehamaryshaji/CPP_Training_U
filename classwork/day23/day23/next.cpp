/*structure
* 
* 
*/
#include<iostream>
using namespace std;
typedef struct emp
{
	int number;
	string empname;
	string address;
	
}EMP;
void disply(EMP*);
int main()
{
	EMP e1;
	cout << sizeof(EMP) << "    " << sizeof(e1) << endl;

	e1.number = 906122;
	e1.empname = "sneha";
	cout << e1.number << endl;
	cout << e1.empname << endl;
	EMP e[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "enter the id" << endl;
		cin >> e[i].number;
		cout << "enter the name" << endl;
		cin >> e[i].empname;
	}
	for (int i = 0;i < 3;i++)
	{
		disply(&e[0]);
	}
	return 0;
}
void disply(EMP* e)
{
	for (int i = 0;i < 3;i++)
	{

		cout << "id=" << e->number << endl;

		cout << "name=" << e[i].empname << endl;
	}

}