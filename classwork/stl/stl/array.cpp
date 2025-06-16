#include<iostream>
#include<array>
using namespace std;

void printj(array<int, 4>& arr) {
    cout << "Array elements: ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}

int main()
{
	array<int, 4> sm = { 3,8,7,0 ,7};
	array<int, 4>vs ;
	printj(sm);
	vs.fill(9);
	printj(vs);
	//sm.swap(vs);
	printj(sm);
	printj(vs);
	return 0;
}