#include<iostream>
#include<vector>
using namespace std;
class student {
	int id;
	string name;
public :
	student(int id,string name):id(id),name(name){}
	void disply()
	{
			cout <<"id= "<< id << endl;
			cout <<"name= "<< name << endl;
	}
	void setid(int v)
	{
		id = v;
	}
	void update_id(student* ptr)
	{
		ptr->setid(10);
		ptr++;
	}
};
int main()
{
	student s[3] = { {101,"sneha"},{101,"mary"} ,{101,"shaji"} };//obj array
	student s1 = { 102,"sneha1" };
	student s2 = { 103,"sneha2" };
	student s3 = { 104,"sneha3" };
	student s4 = { 105,"snehanew" };
	student s5 = { 106,"sneha4" };
	//cout << s[0].capacity() << endl;

	for (auto e : s)
		e.disply();
	vector<student>emp;
	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);
	for (auto e : emp)
	{
		e.disply();
	}
	cout << emp.capacity() << endl;
	cout << emp.size() << endl;
	//emp.front().disply();
	//emp.at(1).disply();
	emp.pop_back();
	for (auto e : emp)
	{
		e.disply();
	}
	emp.insert(emp.begin() + 2, s4);//emp.begin(),s4====>inserting at beggning
	for (auto e : emp)
	{
		e.disply();
	}


	return 0;
}
/*when it comes to the obj of a cllass can i use swap directly???
no,*/