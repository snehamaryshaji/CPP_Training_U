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
		ofstream fout("emp.txt");
		if (!fout.is_open()) 
		{
			cerr << "Error opening file!" << endl;
			return;
		}
		fout << "name " << name << endl;
		fout << "phone number" << ph << endl;
		fout.close();
		ifstream fin("emp.txt");
		if (!fout.is_open())
		{
			cerr << "Error opening file!" << endl;
			return;
		}
		string line;
		while (getline(fin, line))
		{
			cout << line << endl;
		}
		fin.close();

	}
};
int main()
{
	employee e("sneha", 98765);
	e.file_op();
	return 0;
}