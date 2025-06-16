#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class person {
	string name;
	int age;
public:
	person(string name, int age) :name(name), age(age){}
	void print()
	{
		cout << age << endl;
		cout << name << endl;
	}
	bool operator<(person& other)const {
		return name < other.name;
	}
};
int main()
{
	vector<person>details;
	details.emplace_back("sneha", 23);
	details.push_back(person("bhuy", 45));
	sort(details.begin(), details.end());
	cout << "sorted list" << endl;
	/*for ( person& i : details)
	{
		i.print();
	}*/
	for (size_t index=0;index < details.size();index++)
	{
		auto i = details[index];
		i.print();
	}
	return 0;
}