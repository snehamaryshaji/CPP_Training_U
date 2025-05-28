#include<iostream>
using namespace std;
class vehicle
{
protected:
	int price;
public:
	vehicle(int price)
	{
		this->price = price;
	}
};
class car :public vehicle
{
	int seatcap;
	int doors;
	string fuel;
public:
	car(int price, int seatcap, int doors, string fuel) :vehicle(price)
	{
		this->seatcap = seatcap;
		this->doors = doors;
		this->fuel = fuel;
	}
};
class motorcycle :public vehicle
{
	int wheel;
	int cylinder;
	int gear;
public:
	motorcycle(int price, int wheel, int cylinder,int gear) :vehicle(price)
	{
		this->wheel=wheel;
		this->cylinder=cylinder;
		this->gear = gear;
	}
};
class audi :public car
{
	string model;
public:
	audi(int price, int seatcap, int doors, string fuel,string model) :car(price,seatcap,doors,fuel)
	{
		this->model = model;
		
	}
};
class yemaha :public motorcycle
{
	string make;
public:
	yemaha(int price, int wheel, int cylinder, int gear,string make) :motorcycle(price,wheel,cylinder,gear)
	{
		this->make = make;
		
	}
};
int main()
{
	return 0;
}