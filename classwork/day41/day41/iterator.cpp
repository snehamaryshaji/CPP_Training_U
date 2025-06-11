#include<iostream>
#include<vector>
using namespace std;
class emp
{
	int id;
	string name;
public:
	emp(int id,string name):id(id),name(name){}
	void dispemp()
	{
		cout << id << endl;
		cout << name << endl;
	}
};
int main()
{
	vector<int>v= { 1,2,3};
	vector<int>::iterator it = v.begin();
	for (;it != v.end();it++)
	{

		cout << *it << endl;
	}
	vector<emp>vemp;

	vemp.emplace_back(234, "sneha");
	vemp.emplace_back(235, "sneha2");
	vemp.emplace_back(236, "sneha3");
	vemp.emplace_back(237, "sneha4");
	int i = 0;
	vector<emp>::iterator itm = vemp.begin();
	//auto::iterator itm=vemp.begin();
	for (;itm != vemp.end();itm++)
	{
		cout << i + 1 << "  employee details are" << endl;
		itm->dispemp();
		//(*itemp).dispemp();//another way
		i++;
	}
	return 0;
}