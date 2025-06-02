#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class employee
{
	char name[20];
	int ph;
public:
	employee(const char* n, int p)
	{
		strcpy_s(name, n);
		ph = p;
	}
	void file_write()
	{
		ofstream fout("empy.txt");
		if (!fout.is_open())
		{
			cerr << "Error opening file!" << endl;
			return;
		}
		fout << "name " << name << endl;
		fout << "phone number" << ph << endl;

		fout.close();
	}
	void file_read()
	{
		ifstream fin("empy.txt");
		if (!fin.is_open())
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
	employee e2("snehamary", 98765);
	e.file_write();
	e2.file_write();
	return 0;
}