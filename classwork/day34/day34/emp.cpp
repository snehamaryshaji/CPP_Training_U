#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class employee
{
	string name;
	int ph;
public:
	employee(string n, int p)
	{
		name = n;
		ph = p;
	}
	void file_op()
	{
		ofstream fi("emp.txt");
		ifstream fi("emp.txt");
		if (!fi.is_open()) 
		{
			cerr << "Error opening file!" << endl;
		}
		else
		{
			ofstream fi("emp.txt");
		}
	}
};
int main()
{
	
	return 0;
}