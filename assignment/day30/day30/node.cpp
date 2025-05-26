#include "Node.h"
//Definations of Node

int Node::setId(int v) {
	id = v;
	return 0;
}

int Node::getId()
{
	return id;
}
int Node:: setname(string n)
{
	name = n;
	return 0;
}
string Node::getname()
{
	return name;
}
int Node::setsal(float s)
{
	salary = s;
	return 0;
}
float Node::getsal()
{
	return salary;
}
Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}