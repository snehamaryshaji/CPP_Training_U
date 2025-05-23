/*flight seat reservation*/
#include<iostream>
#include<cstring>
using namespace std;
class Flight
{
	char Flightname[30];
	int total_seat;
	int booked_seat;
public:
	Flight(const char name[], int seat_count);
	bool bookSeats(int);
	int ShowAvailability();
};
Flight::Flight(const char name[], int seat)
{
	strcpy_s(Flightname, name);
	total_seat= seat;
	booked_seat = 0;

}
bool Flight:: bookSeats(int booking)
{
	
	if (total_seat<=total_seat)
		total_seat += booking;
	else
	{
		cout << "seat not available";
	}
	return true;

}
int Flight:: ShowAvailability()
{
	cout << Flightname << total_seat;
	return 0;
}
int main()
{
	Flight f1("a1345", 100);
	f1.bookSeats(30);
	f1.ShowAvailability();
	return 0;
}