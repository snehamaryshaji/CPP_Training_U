#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(const vector<int>& num)
{
	//num.push_back(100);
	for (auto i : num)
	{
		cout << i << " ";
	}
	cout << endl;
}
int main()
{
	vector<int>numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(130);
	numbers.push_back(200);
	numbers.push_back(170);
	numbers.push_back(250);
	 print(numbers);
	 for (int i=0;i<numbers.size();i++)
	 {
		 cout << "data at position " << i <<" " << numbers.at(i) << endl;
	 }
	 cout << "first element " <<numbers.front()<<endl;
	 cout << "last element " << numbers.back() << endl;
	 numbers.pop_back();
	 print(numbers);
	 numbers.insert(numbers.begin() + 2, 57);
	 numbers.insert(numbers.begin() , 587);
	 print(numbers);
	 sort(numbers.begin(), numbers.end());
	 print(numbers);
	 cout <<"size= " << numbers.size() << endl;
	 cout <<"capacity = " << numbers.capacity() << endl;
	 numbers.clear();
	 cout << "size= " << numbers.size() << endl;
	 cout << "capacity = " << numbers.capacity() << endl;
	 vector<int>(numbers).swap(numbers);
	 cout << "capacity = " << numbers.capacity() << endl;//for shrink the capacity to zero
	return 0;
}