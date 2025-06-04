#include <iostream>
#include <list>
using namespace std;
class student
{
	int id;
	string name;
public:
	student(int id, string name) :id(id), name(name) {};
	int get_id()
	{
		return id;
	}
	string get_name()
	{
		return name;
	}
	void set_id(int id)
	{
		this->id = id;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	void disply()
	{
		cout << "id      " << id << endl;
		cout << "name    " << name << endl;
	}
	bool operator==(const student& other)const {
		return id == other.id && name == other.name;
	}
	bool operator <(const student& other)const {
		return id <other.id;
	}
	};

	void my_sort(list<student>& a)
	{
		for (auto i = a.begin();i != a.end();++i)  //for(auto i::ls)
		{
			for (auto j = a.begin();j != a.end();++j)    //for(auto j:ls)
			{
				if (i->get_id() < j->get_id()) //i and j is two defferent obj
				{
					auto t = *i;
					*i = *j;
					*j = t;
				}
			}
		}
	}
	void my_sortnew(list<student>& a)
	{
		for (auto& i :a)  //for(auto i::ls)
		{
			for (auto& j :a)    //for(auto j:ls)
			{
				if (i < j) //i and j is two defferent obj
				{
					auto t = i;
					i = j;
					j = t;
				}
			}
		}
	}
	int main()
	{
		student s1(10145, "sneha");
		student s2(108, "sneha2");
		student s3(103, "sneha3");
		student s4(104, "sneha4");
		//student s7[4] = { {101, "sneha"},{101, "sneha"},{101, "sneha"},{101, "sneha"} }
		list<student>listSt;
		//listSt.push_front(s1);
		listSt.push_back(s1);
		listSt.push_back(s2);
		listSt.push_back(s3);
		listSt.push_back(s4);
		std::cout << "List after insertions:\n";
		for (auto ls : listSt)
			ls.disply();//ranged vased looping
		cout << "\n";
		/*listSt.remove(s2);
		std::cout << "After remove(s2):\n";
		for (auto x : listSt)
			x.disply();
		std::cout << "\n";
		*/
		student a(101, "sneha");
		student b(101, "snehamary");
		if (a == b)
		{
			cout << "same student" << endl;
		}
		else
		{
			cout << "defferent" << endl;
		}
		my_sortnew(listSt);
		for (auto ls : listSt)
			ls.disply();//ranged vased looping
		cout << "\n";
		return 0;
	}