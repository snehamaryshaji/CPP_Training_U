#include<iostream>
using namespace std;
class Student
{
protected:
	int roll_no;
	string name;
	int age;
public:
	Student(int roll_no, string name, int age)
	{
		this->roll_no = roll_no;
		this->name = name;
		this->age = age;
	}
	void display()
	{
		cout << "roll no: " << roll_no << endl;
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;

	}
};
class mark :public Student
{
private:
	int marks[3];
	int total;
	float avg;
public:
	mark(int arr[], int roll_no, string name, int age) :Student(roll_no, name, age)
	{
		for (int i = 0;i < 3;i++)
		{
			this->marks[i] = arr[i];
		}
		total = 0;
		avg = 0;
	}
	bool calculate()
	{
		for (int i = 0;i < 3;i++)
		{
			total = marks[i] + total;
		}
		avg = (float)total / 3;
		return true;
	}
	void display(bool result)
	{
		Student::display();
		if (result)
		{
			cout << "full result " << endl;
			cout << "total marks : " << total << endl;
			cout << "avarage marks : " << avg << endl;
		}
	}
};
int main()
{
	int rollno, age;
	string name;
	int arr[3];
	cout << "enter roll no" << endl;
	cin >> rollno;
	cout << "enter name" << endl;
	cin >> name;
	cout << "enter age" << endl;
	cin >> age;
	cout << "enter marks" << endl;
	for (int i = 0;i < 3 ; i++)
	{
		cin >> arr[i];

	}
	mark s(arr, rollno, name, age);
	s.calculate();
	cout << "student info" << endl;
	s.display(true);
}