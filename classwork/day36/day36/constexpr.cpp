#include<iostream>
using namespace std;
constexpr int add(int a, int b)
{
	return a + b;
}
int main()
{
	cout << add(10, 20);
	return 0;
}
/*
defference btw const expr and inline
inline is similar to constexpr inline is at runime const expr is at compile time
both will not generate any stack frame
*/