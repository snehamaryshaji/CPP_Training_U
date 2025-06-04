#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	vector<string>name;
	string str;
	
	while (getline(cin, str))
	{
		if (str == "exit")
			break;
		name.push_back(str);
	}
	sort(name.begin(), name.end());
	std::cout << "After sorting: ";
	for (const auto& i : name)
	{
		cout << i << endl;
	}
	return 0;
}