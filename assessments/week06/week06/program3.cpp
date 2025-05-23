#include<iostream>
using namespace std;
class DeliveryTip
{
    char  orderId[30];
	int billAmount;
	int distance;
	float tip;
public:
	DeliveryTip(const char[], int, int);
	bool calculateTip();
	void printDetails();
};
DeliveryTip ::DeliveryTip(const char id[], int amount, int dist)
{
	strcpy_s(orderId, id);
	billAmount = amount;
	distance = dist;
	tip = 0;
}
bool DeliveryTip::calculateTip()
{

	if (distance < 5)
	{
		tip = billAmount*5/100;
		
	}
	else if (distance >= 5 && distance < 10)
	{
		tip = billAmount *10/100;
	}
	else
	{
		tip = billAmount * 15/ 100;
	}
	return true;
}
void DeliveryTip::printDetails()
{
	cout << "Order " << orderId << "|" << "Tip " << tip << endl;
}
int main()
{
	DeliveryTip d2("ord1", 500, 3);
	d2.calculateTip();
	d2.printDetails();
	return 0;
}