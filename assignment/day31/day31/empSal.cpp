#include<iostream>
using namespace std;
class Employee
{
protected:
	int empid;
	string name;
public:
	Employee(int empid, string name)
	{
		this->empid=empid;
		this->name = name;
	}
};
class developer : public Employee
{
public:
	int codHours;
	developer(int codHours, int empid, string name) :Employee(empid, name)
	{
		this->codHours = codHours;

	}
	int calculateSalary(int codHours)

	{
		return 500 * codHours;
	}
};
class manager : public Employee
{
	int size;
public:
	manager(int size, int empid, string name) :Employee(empid, name)
	{
		this->size =size;

	}
};
class techlead :public developer, manager
{
	int calculateSalary(int codHours, int size)
	{
		return (codHours * 500) + (size * 5000);
	}
public:
	techlead(int size,int empid,string name,int codHours):developer(codHours, empid, name), manager(size, empid, name)

	{}
	void disply()
	{
		cout << "Tech Lead Info :" << endl;
		cout << "EmpId: " <<this-> empid << endl;
		cout << "Name : " << this->name << endl;
		cout << "salary based on coding" << developer::calculateSalary(this->codHours);
		cout << "salary based on coding+team " <<calculateSalary(this->codHours,this->size);
	}
};
