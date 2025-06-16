#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v = { 6,7,6,3,4,5,6 ,1};
	/*int i = 0,j = v.size() - 1;
	while (i < j)
	{
		if (v.at(i) >v.at(j))
		{
			swap(v.at(i), v.at(j));
		}
		i++;
		j--;
	}*/
	//sort(v.begin(), v.end());
	/*auto it = unique(v.begin(), v.end());
	v.erase(it, v.end());*/
	for (auto i : v)
	{
		cout << i << " ";
	}

	return 0;
}