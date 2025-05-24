#include<iostream>
using namespace std;

typedef struct node {
	int v;
	struct node* ptr;
}NODE;
NODE* createNode();
int addNodeBeg(NODE*, NODE*&);
int addNodeEnd(NODE*, NODE*&);
int dispList(NODE*);
int main()
{
	NODE* head = NULL;
	NODE* temp = NULL;
	NODE* nn = NULL;
	int ch = 1;
	int option = 0;
	do {

		cout << "1.add at first\n2.add at end\n3.disply\n4.exit\n";
		cin >> option;
		switch (option)
		{
		case 1:
			nn = createNode();
			addNodeBeg(nn,  head);
			break;
		case 2:
			nn = createNode();
			addNodeEnd(nn,head);
			break;
		case 3:
		    dispList(head);
			break;
		case 4:
			cout << "exiting...." << endl;
			break;
		default:
			cout << "invalid option" << endl;

		}
	} while (option != 4);
	return 0;
}
NODE* createNode()
{
	
	NODE *nn = (NODE*)malloc(sizeof(NODE));
	cout << "enter the value" << endl;
	int value;
	cin >> value;
	nn->v = value;
	nn->ptr = NULL;
	return nn;
}
int addNodeBeg(NODE* nn, NODE*& head)
{
	NODE* temp = NULL;

	if (head == NULL)
	{
		head = nn;
		temp = head;
	}
	else
	{
		temp = head;
		head = nn;
		head->ptr = head;


	}
	return 0;
}
int addNodeEnd(NODE*nn, NODE*& head)
{
	NODE* temp = NULL;
	if (head == NULL)
	{
		head = nn;
		temp = head;
	}
	else
	{
		temp = head;
		while (temp->ptr != NULL)
		{
			temp = temp->ptr;
		}
		temp->ptr = nn;


	}
	return 0;
}
int dispList(NODE * head)
{
	while (head != NULL)
	{
		cout << "value " << head->v << endl;
		head = head->ptr; //moving the head pointer up to null
	}
	return 0;
}