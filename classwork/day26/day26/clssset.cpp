#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;


 void student:: set(char* s, int r)
{
	strcpy(name, s);
	rollno = r;
}
void student::set_mark(int n, int b)
{
	mark = n + b;
}
void student::set_attendance(int a)
{
	attendance = a;
}
void student:: setReg(char* reg)
{
	strcpy(reg_num, reg);
}
void student::setMarks(float m[])
{
	for (int i = 0;i < 4;i++)
	{
		marks[i] = m[i];
	}
}
void student::calcAvg()
{
	float sum= 0;
	float avrge = 0;
	for (int i = 0;i < 4;i++)
	{
		cout << marks[i] << " ";
		sum = marks[i] + sum;

	}
	avrge = sum / 4;
	cout << endl;
	avg = avrge;
}
void student:: get_grade()
{
	if (avg >=85)
	{
		cout << "A" << endl;
	}
	else if (avg <= 85 && avg >= 65)
	{
		cout << "B" << endl;
	}
	else {
		cout << "fail" << endl;
	}
}
void student::disply()
{
	cout << "name---" << name << endl;
	cout << "roll number---" << rollno << endl;
	cout << "reg number---" << reg_num << endl;
	cout << "mark---" << mark << endl;
	cout << "attendance---" << attendance << endl;

}
char* student::getname()
{
	return name;
}