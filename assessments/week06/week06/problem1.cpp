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
	if (total_seat == booking)
		return 0;
	booked_seat = booking;
	return true;

}
int Flight:: ShowAvailability()
{
	return total_seat - booked_seat;
}
int main()
{
	Flight f1("a1345", 100);
	if (f1.bookSeats(30))
	{
		cout<<"seats available "<<f1.ShowAvailability();
	}
	else
	{
		cout << "Booking Failed:Not enough space" << endl;
	}
	if (f1.bookSeats(80))
	{
		cout << "seats available " << f1.ShowAvailability();
	}
	else
	{
		cout << "Booking Failed:Not enough space" << endl;
	}
	return 0;
}