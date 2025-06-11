#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	vector<int>arr = { 4,5,2,25,7,8 };
	int n = arr.size();
	vector<int>nge(n, -1);
	stack<int>s;
	for (int i = 0;i < n;i++)
	{
		while (!s.empty() && arr[i] > arr[s.top()])
		{
			nge[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0;i < n;i++) {
		cout << arr[i] << "-->" << nge[i] << endl;
	}
	return 0;
}