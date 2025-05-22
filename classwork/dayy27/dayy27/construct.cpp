/*
* 
* 
*/
#include<iostream>
using namespace std;
class student
{
	int rollno;
	string name;
public:
	student() 
	{
		cout << "default constructor called" << endl;
		rollno =10;
		name = "snehamary";
	}
	student(int id,string name1)
	{
		cout << "parameterized constructor called" << endl;
		name = name1;
		rollno = id;
	}
	void fun()
	{
		cout <<"function called "<< endl;
	}
	void display()
	{
		cout << name << " " << rollno << endl;
	}
	~student()
	{
		cout<<"destructor called"<<endl;
	}
};
int main()
{
	student s1,s2;
	student e1(101, "sneha");
	
	s1.fun();
	student e2(e1);//default copy constructor
	e1.display();
	e2.display();
	student e3 = e1;
	e3.display();
	return 0;
}