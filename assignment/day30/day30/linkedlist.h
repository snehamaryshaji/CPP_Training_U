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
	void display();
};