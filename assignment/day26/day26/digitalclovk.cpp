#include<iostream>
using namespace std;
class clock
{
	int hour;
	int min;
	int second;
public:
	clock(int h = 0, int m = 0, int s = 0)
	{
		if (hour >= 0 && hour <= 24)
		{
			hour = h;
		}
		else {
			hour = 0;
		}
		if (min >= 0 && hour <= 60)
		{
			min = m;
		}
		else {
			min = 0;
		}
		if (second >= 0 && second <= 60)
		{
			second = s;
		}
		else {
			second= 0;
		}
	}
	void tik();
	void disply_time();
};
void clock::tik()
{
	second++;
	if (second == 60)
	{
		second = 0;
		min++;
		if (min == 60)
		{
			min = 0;
			hour++;
			if (hour == 24)
			{
				hour = 0;
			}
		}
	}
}
void clock::disply_time()
{
	cout << hour << ":" << min << ":" << second << endl;
}
int main()
{
	clock s(20, 56, 8);
	s.disply_time();
	s.tik();
	return 0;
}