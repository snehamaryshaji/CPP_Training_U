#pragma once
#include <iostream>
#include "Node.h"
#include "linkedlist.h"
int LinkedList::dispMenu()
{
	int ch1;
	cout << "Press,\n1. Add employee\n2. display all employee\n";
	cout << "3.delete employee by id\n4.search employee by name\n5.deletenode\n6.update salary by id\n7. Exit..\nChoice: ";
	cin >> ch1;
	return ch1;
}
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
					prev->setNext(temp->getNext()) ;
				}
				delete temp;
				return true;
			}

		}
		cout << id<< "is not found" << endl;
	}
	return false;

}
bool LinkedList:: search(string n)
{
	Node* temp = head;
	if (head == NULL)
	{
		cout << n << " not element" << endl;
		return false;
	}
	else
	{
		int count = 1;
		while (temp != NULL)
		{
			if (temp->getname() == n)
			{
				cout << n<< " is found at node " << count << endl;
				return true;
			}
			temp = temp->getNext();
			count++;

		}
		cout << n << " is not found " << endl;

	}
	return false;

}
bool LinkedList::updateSalary(int id,float newSal)
{
		Node* temp = head;
		if (head == NULL)
		{
			cout << id << " list empty" << endl;
			return false;
		}
		else
		{
			while (temp != NULL)
			{
				if (temp->getId() == id)
				{
					temp->setsal(newSal);
				}
				temp = temp->getNext();

			}
			cout << id << " nod not found" << endl;

		}
		return false;

	}
int  LinkedList:: countEmpy()
{
	Node* temp = head;
	int count = 1;
	if (head == NULL)
	{
		cout << " list empty" << endl;
		return 0;
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->getNext();

		}
	}
	return count;

}
