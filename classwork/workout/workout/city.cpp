#include<iostream>
#include<map>

using namespace std;
class cityguide
{
	multimap<string, string>landmarks;
	//map<string,set<string>>landmarks;
public:
	void add_landmark(const string& city,const string& land)
	{
		/*landmarks.insert({ city,land });
		cout << "added" << " " << land << endl;*/
		if (landmarks[city].insert(landmarks).second)
		{
			cout << "added ";
		}
		else {
			cout << "duplicates found" << endl;
		}
	}
	void show_landmarks(const string& city)const {
		auto range = landmarks.equal_range(city);
		if (range.first == range.second)
		{
			cout << "no mathiching found" << endl;
		}
		cout << "all cities" << endl;
		for (auto it = range.first;it != range.second;it++)

		{
			cout << it->second;
		}
	}
	void show_all(const string& city)const
	{
		for (const auto& it : landmarks) {
			cout << it.second;
		}
	}
};
int main()
{
	return 0;
}
