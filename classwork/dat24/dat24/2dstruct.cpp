#include<iostream>
#define dep 3
#define noemp 2

using namespace std;
typedef struct employee
{
	int id;
	char name[20];
}EMP;
int main()
{
	//EMP emp[3][5];
	EMP** e = nullptr;
	//e = (EMP**)malloc(dep * sizeof(EMP*));
	e = new EMP *[dep];
	for (int i = 0;i < dep;i++)
	{
		//e[i] = (EMP*)malloc(sizeof(EMP) * noemp);//allocate col my
		e[i] = new EMP[noemp];
		cout << "address of e[" << i << "]=" << (unsigned long int)e[i]<<endl;
	}
	cout << "enter employee details" << endl;
	for (int i = 0;i < dep;i++)
	{
		cout << "enter employee details for " << (i + 1) << "department" << endl;
		for (int j = 0;j < noemp;j++)
		{
			cout << "id";cin >> e[i][j].id;
			cout << "name";cin >> e[i][j].name;

		}
		cout <<"-----------------------------" << endl;
	}
	for (int i = 0;i < dep;i++)
	{
		cout << " employee details for " << (i + 1) << "department" << endl;
		for (int j = 0;j < noemp;j++)
		{
			cout << "id:";cout<< e[i][j].id;
			cout << "name:";cout<< e[i][j].name;

		}
		cout << "-----------------------------" << endl;
	}
	return 0;
}