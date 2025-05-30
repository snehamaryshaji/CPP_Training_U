#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	/*ofstream fout("emp.txt");
	//fout<<"name"
	//int count = 1;
	for (int i = 1;i <=10;i++)
	{
		fout << "4"<<"*"<<i <<"="<<4*i<<endl;
	}
	fout.close();
	*/
	string line;
	ifstream fin("emp.txt");
	//ifstream fin("emp.txt");
	if (!fin.is_open())
	{
		cerr << "error in opening file" << endl;//for error checking
	}
	while (getline(fin, line))
		cout << line << endl;
	fin.close();
	ofstream file("emp.txt", ios::trunc| ios::app);
	file<< "New log entry\n";
	file.close();
	return 0;
}
/*once eof reached the while loop is stopped*/