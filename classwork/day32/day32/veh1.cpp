#include<iostream>
using namespace std;
class vehicle
{
protected:
	string make;
	string model;
public:
	vehicle()
	{
		this->make = "generic";
		this->model = "vehicle";
	}
	vehicle(string make, string model)
	{
		this->make = make;
		this->model = model;
	}
	void start()
	{
		cout << "starting the " <<make<<" "<<model<< endl;
	}
	void stop()
	{
		cout << "stopped the " <<make<<" "<<model<< endl;
	}

};
class car :public vehicle
{
	int door;

public:
	car()
	{
		door = 0;
	}
	car(string make, string model, int door) :vehicle(make, model)
	{
		this->door = door;
	}
	void honk()
	{
		cout << "honking the horn of the " << vehicle::make << " " << vehicle::model << endl;
	}
};
int main()
{
	car c;
	c.start();
	c.stop();
	
	car c1("toyota", "camry",4);
	c1.start();
	c1.stop();
	c1.honk();
	return 0;
}