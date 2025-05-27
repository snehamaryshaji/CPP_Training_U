#include<iostream>
using namespace std;
class vehicle
{
protected:
	int wheels;
	string model;
	int seat_cap;
public:
	vehicle(int wheels,string model,int seat_cap)//without default constructor error will occurs
	{
		this->wheels = wheels;
		this->model = model;
		this->seat_cap = seat_cap;
	}
	vehicle()//without default constructor error will occurs
	{
		this->wheels =0;
		this->model ="";
		this->seat_cap =0;
	}
};
class car : public vehicle
{
private:// restricting the enhiritation there is no other clid clss
	int price;
	string colour;
public:
	car(int price, string colour,int wheels, string model, int seat_cap):vehicle(wheels,model,seat_cap)
	{
		this->price = price;
		this->colour = colour;
	}
	void disp()
	{
		cout << "no of wheels " << this->wheels << endl;
		cout << "model " << this->model << endl;
		cout << "seat capacity " << this->seat_cap << endl;
		cout << "car price " <<this-> price << endl;
		cout << "car colour " <<this-> colour << endl;
	}
};
int main()
{
	car obj1(45677,"red",3,"78uy",4);
	
	obj1.disp();
	return 0;
}