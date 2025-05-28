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
	void disply(int dist, int days)
	{
		cout << "fare without discount: " << calculateFare(dist) << endl;
		cout << "Fare with long-term discount:" << calculateFare(dist, days) << endl;
	}

};
class Car : public Vehicle
{
public:
	Car(string id, string type, int rate) :Vehicle(id, type, rate){}
};
class Bike : public Vehicle
{
public:
	Bike(string id, string type, int rate) :Vehicle(id, type, rate){}
};
int main()
{
	string type, id;
	int rate,day;
	float dist;
	cout << "enter type car or bike" << endl;
	cin >> type;
	cout << "enter id" << endl;
	cin >> id;
	cout << "enter rate" << endl;
	cin >> rate;
	cout << "enter distance" << endl;
	cin >> dist;
	cout << "enter days" << endl;
	cin >> day;
	//Vehicle c(id, type, rate);
	//c.disply(dist, day);

	if (type == "car")
	{
		Car c(id, type, rate);
		cout << "fare without discount " << c.calculateFare(dist) << endl;
		cout<<"Fare with long-term discount:"<<c.calculateFare(dist, day)<<endl;
	}
	else if (type == "bike")
	{
		Bike c(id, type, rate);
		cout << "fare without discount: " << c.calculateFare(dist) << endl;
		cout << "Fare with long-term discount:" << c.calculateFare(dist, day) << endl;
	}

	return 0;
}