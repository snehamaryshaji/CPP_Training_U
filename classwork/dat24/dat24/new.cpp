#include<iostream>
using namespace std;
struct emp
{
	int id;
	string name;
};
int main()
{
	int* p = new int(10);//allocate 4bytes
	int* ptr = new int[10];//allocate 4810 bytes
	cout << sizeof(p)<<endl;
	cout << sizeof(ptr);
	for (int i = 0;i < 10;i++)
	{
		cout <<*ptr++<< endl;
	}
	emp* e= new emp[10];
	emp* e1 = new emp{ 101,"sneha" };
	cout << e1->id << endl;
	cout << e1->name << endl;
	delete e;
	delete[]e1;

	return 0;
}