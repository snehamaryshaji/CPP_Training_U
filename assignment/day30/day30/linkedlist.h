#pragma once
#include "Node.h"


class LinkedList {
private:
	Node* head;
public:
	LinkedList() {

		head = nullptr;
	}

	int addEmployee(int,string,float);
	bool dltEmpId(int);
	void display();
	bool search(string n);
	bool updateSalary(int,float);
	int countEmpy();
	int dispMenu();
};