/*hotel booking*/
#include<iostream>
#include<cstring>
using namespace std;
class HotelRoom
{
	int RoomNumber;
	char type[10];
	bool isBooked;
public:
	HotelRoom(int num, const char name[]);
	bool bookRoom();
	void ShowStatus();
};
HotelRoom:: HotelRoom(int num,const char name[])
{
	RoomNumber = num;
		strcpy(type, name);
	isBooked = false;
}
bool HotelRoom::bookRoom()
{
	if (isBooked==0)
	{
		isBooked = true;
	}
	else 
	{
		cout << "Room already booked" << endl;
	}
	return true;
}
void HotelRoom::ShowStatus()
{
	if (isBooked)
	{
		cout << "Room " << RoomNumber << "(" << type << ")" << " now booked" << endl;
	}
	
}
int main()
{
	HotelRoom h1(201, "ac");
	h1.bookRoom();
	h1.ShowStatus();
	h1.bookRoom();
	
	return 0;
}