#include <iostream>
using namespace std;
class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0) {
		data = d;
		next = nullptr;
		cout << "Constr of Node got called: data=" << data << endl;
	}
	int getData();
	int setData(int);
	Node* getNode();
	void setNode(Node*);

};

int Node::setData(int v) {
	data = v;
	return 0;
}

int Node::getData()
{
	return data;
}

Node* Node::getNode()
{
	return next;
}

void Node::setNode(Node* nn)
{
	next = nn;
}


class LinkedList {
private:
	Node* n = nullptr, * head = nullptr, * temp = nullptr;
public:
	LinkedList() {
		//createNode
		n = new Node;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void display();
};


int LinkedList::addEnd(int v) {

	temp = head;
	n->setData(v);
	if (head == nullptr)
	{
		//empty list and first node
		head = n;
		temp = n;
	}
	else
	{
		while (temp != nullptr)
		{
			temp->setNode(n);
			
		}
		temp = temp->getNode();
	}
	//head = temp;

	return 0;
}

void LinkedList::display()
{
	head = temp;
	if (head == nullptr)
	{
		cout << "list is empty" << endl;
	}
	while (head != nullptr) {
		cout << n->getData() << endl;
		head = head->getNode();
	}
}

int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	l2.addEnd(10);
	l2.addEnd(11);
	l2.addEnd(12);

	l2.display();

	return 0;
}