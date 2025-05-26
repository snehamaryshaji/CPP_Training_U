#include <iostream>
#include<string>
#include "node.h"
#include "linkedlist.h"
using namespace std;
int main()
{
	LinkedList l2;
	int id;
	string name;
	float salary;
	int ch = 1;
	while (ch)
	{
		switch(l2.dispMenu())
		{
		case 1:
			cout << "enter id " << endl;
			cin >> id;
			cin.ignore();
			cout << "enter name" << endl;
			getline(cin,name);
			cout << "enter salary" << endl;
			cin >> salary;
			l2.addEmployee(id, name, salary);
			break;
		case 2:
			l2.display();
			break;
		case 3:
			cout << "enter id" << endl;
			cin >> id;
			l2.dltEmpId(id);
			break;
		case 4:
			cout << "enter the name" << endl;
			cin >> name;
			l2.search(name);
			break;
		case 5:
			cout << "enter the id" << endl;
			cin >> id;
			cout << "enter the updated salary" << endl;
			cin >> salary;
			l2.updateSalary(id, salary);
			break;
		case 6:
			cout << l2.countEmpy() << endl;;
			break;
		case 7:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}
	cout << "Exiting program...." << endl;
	return 0;
}