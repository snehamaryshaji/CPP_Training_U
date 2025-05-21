#include<iostream>
using namespace std;
class digclock {
	int hour;
	int min;
	int second;
public:
	digclock(int h = 0, int m = 0, int s = 0)
	{
		if (hour >= 0 && hour < 24)
		{
			hour = h;
		}
		else {
			hour = 0;
		}
		if (min >= 0 && hour < 60)
		{
			min = m;
		}
		else {
			min = 0;
		}
		if (second >= 0 && second < 60)
		{
			second = s;
		}
		else {
			second = 0;
		}
	}
	void tik();
	void disply_time();
};
void digclock::tik()
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
void digclock::disply_time()
{
	cout << hour << ":" << min << ":" << second << endl;
}
int main()
{
	digclock w;
	for (int i = 0;i < 7;i++)
	{
		w.disply_time();
		w.tik();
	}
	return 0;
}