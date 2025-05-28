#include<iostream>
using namespace std;
class animal
{
public:
	void sound()
	{
		cout << "animal make sound" << endl;
	}
};
class dog : public animal
{
public:
	void sound()
	{
		cout << "dog barks" << endl;
	}
};
class cat : public animal
{
public:
	void sound()
	{
		cout << "cat meow" << endl;
	}
};

int main()
{
	dog c;
	c.sound();
	cat c1;
	c1.sound();
	return 0;
}