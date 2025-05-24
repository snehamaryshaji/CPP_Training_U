#include<iostream>
using namespace std;
typedef struct node {
	int v;
	struct node* ptr;
}NODE;
int main()
{
	//node creation
	NODE n1, n2, n3,n4,n5,n6;
	//initializing
	n1.v = 10;
	n1.ptr = NULL;
	n2.v = 20;
	n2.ptr= NULL;
	n3.v = 30;
	n3.ptr= NULL;
	n4.v = 40;
	n4.ptr = NULL;
	n5.v = 50;
	n5.ptr = NULL;
	n6.v = 100;
	n6.ptr = NULL;

	//relationship
	n1.ptr = &n2;
	n2.ptr = &n3;
	NODE *head = &n1;
	cout << "n1 value " << head->v<<endl;
	head = head->ptr;
	cout << "n2 value " << head->v<<endl;//(*head).v  =====>   -> this operator
	head = head->ptr;
	cout << "n3 value " << head->v << endl;
	head = &n1;
	//inserting
	n1.ptr = &n4;
	n4.ptr = &n2;
	NODE* temp= head;
	head = &n5;
	head->ptr = temp;
	temp = head;
	while (temp->ptr != NULL)
	{
		temp=temp->ptr;
	}
	temp->ptr = &n6;
	while (head != NULL)
	{
		cout << "value " << head->v << endl;
		head = head->ptr; //moving the head pointer up to null
	}
	return 0;
}