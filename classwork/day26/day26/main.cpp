#include<iostream>
#include "student.h"
using namespace std;

int main()
{
	char n[] = "snehamary";
	int r = 108;

	student s1;
	float marks[4] = { 80,80,90,100 };
	s1.set(n, r);
	char reg[] = "MBI19EC027";
	s1.setReg(reg);
	s1.set_mark(89, 99);
	s1.setMarks(marks);
	s1.set_attendance(89);
	s1.calcAvg();
	s1.disply();
	s1.get_grade();
	//cout<<s1.getname() << endl;
	return 0;
}