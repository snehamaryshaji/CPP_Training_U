#include<iostream>
using namespace std;

typedef struct node {
	int v;
	struct node* ptr;
}NODE;
void disply(NODE* head);
int main()
{
	NODE* nn = NULL;
	NODE* head = NULL;
	NODE* temp = NULL;
	int ch = 1;
	while(ch)
	{
		nn = (NODE*)malloc(sizeof(NODE));
		cout << "enter the value" << endl;
		int value;
		cin >> value;
		nn->v = value;
		nn->ptr = NULL;
		if (head == NULL)
		{
			head = nn;
			temp = head;
		}
		else 
		{
			head->ptr = nn;
			head=head->ptr;


		}
		cout << "do you want to continue(1/0)" << endl;
		cin >> ch;
	}
	head = temp;
	disply(head);
	return 0;
}
void disply(NODE* head)
{
	while (head != NULL)
	{
		cout << "value " << head->v << endl;
		head = head->ptr; //moving the head pointer up to null
	}
}