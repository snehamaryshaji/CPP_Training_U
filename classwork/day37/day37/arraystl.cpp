/*develop aclass  stl container like array*/
/*#include<iostream>
using namespace std;
template<typename T,typename N>
class array
{
	T data[N];
public:


};
int main()
{
	return 0;
}*/
#include<iostream>
using namespace std;
template<typename T, size_t N>
class arra
{
	T* arr;
   size_t cap;
public:
	arra()
	{
		arr = new int[cap];
	}
	void set(T index, T value)
	{
		if (index >= 0 && index < value)
		{
			arr[index] = value;
		}
		else
		{
			cout << "out of bounds" << endl;
			return;
		}
	}
	T get(T index)const {
		if (index >= 0 && index < cap)
		{
			return arr[index];
		}
		cout << "out of bounds" << endl;
		return;
	}
	~arra()
	{
		delete[] arr;
	}
};

int main()
{
	arra<int,5>a;
	return 0;
}