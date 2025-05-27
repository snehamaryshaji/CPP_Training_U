#include<iostream>
using namespace std;
class Vehicle
{
	string id;
	string type;
	int rate;
public:
	Vehicle(string id, string type, int rate)
	{
		this->id = id;
		this->type = type;
		this->rate = rate;
	}
	float calculateFare(float dist)
	{
		return rate * dist;
	}
	float calculateFare(float dist,int day)
	{
		float expense= rate * dist;
		if (day > 2)
		{
			return expense * 0.2;
		}
		return expense;
	}

};
class car : public Vehicle
{
	car(string id, string type, int rate) :Vehicle(id, type, rate){}
};
class bike : public Vehicle
{
	bike(string id, string type, int rate) :Vehicle(id, type, rate){}
};
int main()
{
	string type, id;
	int rate;
	cout << "enter type car or bike" << endl;
	cin >> type;
	cout << "enter id" << endl;
	cin >> id;
	cout << "enter rate" << endl;
	cin >> rate;
	if (type == "car")
	{
		car c(id, type, rate);
	}
	else if (type == "bike")
	{
		bike c(id, type, rate);
	}

	return 0;
}