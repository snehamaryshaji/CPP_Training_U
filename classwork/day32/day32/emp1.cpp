#include<iostream>
using namespace std;
class person
{
protected:
	string name;
	string gender;
	int age;
	int phone;
public:
	person(string name, string gender, int age, int phone)
	{
		this->name = name;
		this->gender = gender;
		this->age = age;
		this->phone = phone;
	}
	void dipPerson()
	{
		cout << "name " << this->name << endl;
		cout << "gender " << this->gender << endl;
		cout << "age " << this->age << endl;
		cout << "phone number " << this->phone << endl;
	}
};
class employee : public person
{
protected:
	string dep;
	int id;
	int salary;
public:
	employee(string name, string gender, int age, int phone, int id, int salary, string dep) :person(name, gender, age, phone)
	{
		this->id = id;
		this->salary = salary;
		this->dep = dep;
	}
	void dipEmp()
	{
		cout << "id " << this->id << endl;
		cout << "salary " << this->salary << endl;
		cout << "department " << this->dep << endl;
	}
};
class empfin :public employee
{
	int pt;
	int pf;
	int vp;
	int days;
public:
	empfin(string name, string gender, int age, int phone, int id, int salary, string dep, int pt, int pf, int vp, int days) : employee(name, gender, age, phone, id, salary, dep)
	{
		this->pt = pt;
		this->vp = vp;
		this->pf = pf;
		this->days = days;
	}
	void dipfin()
	{
		dipPerson();
		dipEmp();
		cout << "professional tax " << this->pt << endl;
		cout << "providant fund " << this->pf << endl;
		cout << "variable pay " << this->vp << endl;
		cout << "number of days working " << this->days << endl;
		int gs = (salary - pt - pf);
		cout << "gross salary " << gs << endl;
		cout << endl;
	}
};
class lms :public employee
{
private:
	int hours;
	int day;
public:
	lms(string name, string gender, int age, int phone, int id, int salary, string dep, int pt, int pf, int vp, int days, int hours, int day) :employee(name, gender, age, phone, id, salary, dep))
	{
		this->hours = hours;
		this->day= day;
	}
	void displms()
	{
		cout << "hours" << this->hours << endl;
		cout << "day " << this->day << endl;
	}
};
void setdays(empfin);
int main()
{
	empfin e("sneha","f",23,23456,12,34,"sc", 67,56,89, 78);
	e.dipfin();
	empfin e2("mary", "f", 23, 23456, 12, 34, "sc", 67, 56, 89, 78);
	e2.dipfin();

	return 0;
}