#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct emp
{
	int id;
	char name[20];
};
int main()
{
	fstream fi;
	struct emp e = { 101,"sneha" };
	fi.open("text1.txt", ios::in | ios::out);
	if (!fi.is_open())
	{
		cerr << "unable to open the file" << endl;
	}
	fi.write((char*)&e, sizeof(e));
	//fi << "hello sneha" << endl;
	return 0;
}