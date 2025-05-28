#include<iostream>
using namespace std;
class Employee
{
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
protected:
	int codHours;
	developer(int codHours, int empid, string name) :Employee(empid, name)
	{
		this->codHours = codHours;

	}
	int calculateSalary(int codHours)

	{
		return 500 * this->codHours;
	}
};
class manager : public Employee
{
protected:
	int size;
	manager(int size, int empid, string name) :Employee(empid, name)
	{
		this->size =size;

	}
};
class techlead :public Employee, public developer, public manager
{
public:
	techlead(int size,int empid,string name,int codHours): Employee(empid, name),developer(codHours, empid, name), manager(size, empid, name)

	{}
	int calculateSalary(int codHours,int size)
	{
		return (codHours * 500) + (size * 5000);
	}
	void disply()
	{
		cout << "Tech Lead Info :" << endl;
		cout << "EmpId: " <<this-> empid << endl;
		cout << "Name : " << this->name << endl;
		cout << "salary based on coding" << developer::calculateSalary(this->codHours);
		cout << "salary based on coding+team " << developer::calculateSalary(this->codHours,this->size);
	}
};
