#include<iostream>
using namespace std;
class movie {
	char title[40];
	string genure;
	int rate;
public:
	void set_details_title();
	void set_details_genure();
	int set_details_rating();
	void get_details();
    void rating(int rate);
};
void movie::set_details_title()
{
	cout << "enter the movie title" << endl;
	cin >> title;
}
int movie::set_details_rating()
{
	cout << "give rating upto 10" << endl;
	cin >> rate;
	return rate;
}
void movie::set_details_genure()
{
	cout << "enter the movie genure" << endl;
	cin >> genure;
}
void  movie:: get_details()
{
	cout << "title " <<title << endl;
	cout << "genure " << genure << endl;
}

void movie:: rating( int rate)
{
	if (rate >= 8)
	{
		cout << "HIT" << endl;
	}
	else if (rate >=7)
	{
		cout << "average" << endl;

	}
	else
	{
		cout << "flop" << endl;
	}
}
int main()
{
	movie s;
	int rate;
	s.set_details_title();
	s.set_details_genure();
	rate = s.set_details_rating();
	s.get_details();
	s.rating(rate);
	return 0;
}