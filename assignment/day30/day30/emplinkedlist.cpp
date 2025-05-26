#pragma once
#include <iostream>
#include "Node.h"
#include "linkedlist.h"
int LinkedList::addEmployee(int num, string n, float s) {

	//create new node
	Node* nn = new Node;
	nn->setId(num);
	nn->setname(n);
	nn->setsal(s);
	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;
	}

	return 0;
}
void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->getname() << endl;
		cout << temp->getId() << endl;
		cout << temp->getsal() << endl;
		cout << "----------------------------" << endl;
		temp = temp->getNext();
	}
	cout << "NULL" << endl;
}
bool LinkedList::dltEmpId(int id)
{

	Node* temp = head;
	Node* prev = NULL;
	if (head == NULL)
	{
		cout << id << " no element" << endl;
		return false;
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->getId() != id)
			{
				prev = temp;
				temp = temp->getNext();
			}
			else
			{
				if (prev == NULL)
				{
					head = temp->getNext();
				}
				else
				{
					prev->getNext() = temp->getNext();
				}
				free(temp);
				return head;
			}

		}
		cout << id<< "is not found" << endl;
	}
	return true;

}
