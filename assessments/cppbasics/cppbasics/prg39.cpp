#include<iostream>
using namespace std;
int factorial(int limit);
int main()
{
	int limit;
	cin >> limit;
	cout<<factorial(limit);
	return 0;
}
int factorial(int limit)
{
	if(limit == 0)
		return 1;
	return limit * factorial(limit - 1);

}