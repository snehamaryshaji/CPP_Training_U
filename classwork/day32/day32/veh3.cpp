#include<iostream>
using namespace std;
class vehicle
{
protected:
	int price;
protected:
	void dispveh()
	{
		cout << "price " << this->price << endl;
	}
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
protected:
	void displycar()
	{
		cout << "seat capacity " << this->seatcap << endl;
		cout << "number of doors " << this->doors << endl;
		cout << "fuel type " << this->fuel << endl;;
	}
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
protected:
	void displymot()
	{
		cout << "number of wheels " << this->wheel << endl;
		cout << "number of cylinders " << this->cylinder << endl;
		cout << "gear type " << this->gear << endl;;
	}
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
	void dispaudi()
	{
		dispveh();
		displycar();
		cout << "model " << this->model << endl;
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
	void dispyem()
	{
		dispveh();
		displymot();
		cout << "make " << this->make << endl;
	}
};
int main()
{
	yemaha c(700000, 2, 4, 4, "tty");
	cout << "yemaha" << endl;
	c.dispyem();
	cout << "=============================================" << endl;
	audi c2(700000, 2, 4, "discel", "tty");
	cout << "audi " << endl;
	c2.dispaudi();
	return 0;
}