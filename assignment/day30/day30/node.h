#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int id;
	string name;
	float salary;
	Node* next;
public:
	Node(int i=0,string n="", float s=0) {
		id = i;
		name = n;
		salary = s;
		next = nullptr;
		//cout << "Constr of Node got called:" <<endl;
	}
	int getId();
	int setId(int);
	string getname();
	int setname(string);
	float getsal();
	int setsal(float);
	Node* getNext();
	void setNext(Node*);

};
