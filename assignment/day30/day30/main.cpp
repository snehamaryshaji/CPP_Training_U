#include <iostream>

#include "linkedlist.h"

using namespace std;

int main()
{
	LinkedList l2;
	l2.addEmployee(1234, "sneha",50000.00);
	l2.addEmployee(1235, "snehamary", 50000.00);
	l2.addEmployee(1236, "snehamary shaji", 50000.00);
	l2.display();
	return 0;
}