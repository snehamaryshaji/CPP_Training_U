#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Emp
{
private:
	int id;
	string name;
public:
	Emp(int id, string name) :id(id), name(name){}
	void disp()
	{
		cout << "ID: " << id << "\tName: " << name<<endl;
	}
};
int main()
{
	Emp e1(101, "abc1");
	Emp e2(102, "abc2");
	Emp e3(102, "abc3");
	map<int, vector<Emp>>mapEmp;

	vector<Emp>v;
	v.push_back(e1);
	v.push_back(e2);

	mapEmp[101] = v;
	mapEmp[102] = v;
	auto i = mapEmp.begin();
	auto ele = i->second;
	ele[0].disp();
	ele[1].disp();
	//for (auto j : v)
	//{
		//j.disp();
	//}

}