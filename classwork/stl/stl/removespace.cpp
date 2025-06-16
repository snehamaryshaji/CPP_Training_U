#include<string>
#include<iostream>
using namespace std;
int main()
{
	string name;
	getline(cin, name);
	int j = 0;
	for (int i = 0;i < name.size();i++)
	{
		char o = name[i];
		if (o != ' ')
		{
			name[j] = name[i];
			j++;
		}
	}
	name.resize(j);//without this may get unwanted characters at the end
	cout << name << endl;
	return 0;
}