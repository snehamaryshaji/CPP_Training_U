#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{


	vector<int> scores;
	cout << "enter the marks to end -1" << endl;
	int score=0;
	while (cin >> score && score != -1)
	{
		
		scores.push_back(score);
	}
	sort(scores.begin(), scores.end());
	std::cout << "After sorting: ";
	for (size_t i=0;i<scores.size();++i )
	{
		cout << scores[i] << " ";
	}
	cout << endl;
	/*for (size_t i = 0;i < scores.size();++i)
	{
		for (size_t j = 0;j < scores.size();++j)
		{
			if (scores[i] == scores[j])
			{
				scores[i].pop_back[i];
			}
		}
		*/
	
		vector<int> unique;
		for (size_t i = 0;i < scores.size();++i)
		{
			if (unique.empty() || unique.back() != scores[i])
			{
				unique.push_back(scores[i]);
			}
		}
		cout << "after removing duplicates" << endl;
		for (size_t i = 0;i < unique.size();++i)
		{
			cout << unique[i] << " ";
		}
	cout << endl;
	return 0;
	

}