#include<iostream>
using namespace std;
void get_details(EMP*);
void get_salary_details();
void period();
typedef struct employee
{
	int id;
	string name;
	
}EMP;
typedef struct period
{
	int period_id;
	int period_days;
}PRD;
typedef struct salay_details
{
	int empid;
	float basic_pay;
	float var_pay;
	float allowance;

	
}SAL;

int main()
{
	EMP var[2];
	PRD v[2];
	SAL t[2];

	for (int i = 0;i < 3;i++)
	{
		get_details(&var[0]);
		get_salary_details(&v[i], id);
		void period(PRD * p, int id)

	}

	return 0;
}
void get_details(EMP* e)
{
	cout << "enter the employee id" << endl;
	cin >> e->id;
	cout << "enter the employee name" << endl;
	cin >> e->name;	
}
void get_salary_details(SAL*s,int p)
{
	s->empid = p;
	cout << "enter basic pay" << endl;
	cin>>s->basic_pay;
	cout << "enter variable pay" << endl;
	cin >> s-> var_pay;
	cout << "enter allowance" << endl;
	cin >> s->allowance;
}
void period(PRD*p,int id)
{
	p->period_id = id;
	cout << "enter days<<endl";
	cin >> p->period_days;
}
float gross_salary(SAL* s)
{
	return (s->basic_pay + s->var_pay + s->allowance) / 30;
}
float deduction(float pay)
{
	return pay * 0.4;
}