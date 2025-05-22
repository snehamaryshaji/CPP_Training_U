#include "retail.h"
int main()
{
	inventory c;
	if (c.add_item(10, "apple", 456))
	{
		cout << "successfull" << endl;
	}
	int new1;
	cout << "enter the new quantity" << endl;
	cin >> new1;
	if (c.updateQnty(new1))
	{
		cout << "quantity updated successfully" << endl;
	}
}