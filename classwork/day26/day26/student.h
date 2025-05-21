#pragma once
class student
{
	int rollno;
	char name[40];
	char reg_num[10];
	int contact;
	int age;
	int mark;
	float avg;
	float marks[4];
	int attendance;
public:
	void set(char* s, int r);
	void set_mark(int n, int b);
	void set_attendance(int a);
	void setReg(char* reg);
	void setMarks(float m[]);
	void disply();
	char* getname();
	void calcAvg();
	void get_grade();
};