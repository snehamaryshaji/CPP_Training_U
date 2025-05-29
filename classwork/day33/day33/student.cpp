#include<iostream>
using namespace std;
class student
{
protected:
	string name;
	int ph;
public:
	student(string name, int ph)
	{
		this->name = name;
		this->ph = ph;
	}
	//virtual void sport_points() = 0;
	virtual void disply() = 0;
};
class admin :public  student
{
	int ex_fee;
	int paid;
	//bool pay_satatus;
public:
	admin(string name, int ph,int paid ) :student(name, ph)
	{
		this->ex_fee = 50000;
		this->paid = paid;
	}
	void disply()
	{
		cout << "student name " << name << endl;
		cout << " total fee " << ex_fee << endl;
		cout << "paid amount " << paid << endl;
	}
};
class sports :public  student
{
	int points;
public:
	sports(string name, int ph,int points) :student(name, ph)
	{
		this->points = points;
	}
	void disply()
	{
		cout << "student name " << name << endl;
		cout << " sports points " << points<< endl;
	}
};
int main()
{
	sports s("sneha", 9087789, 80);
	s.disply();
	return 0;
}