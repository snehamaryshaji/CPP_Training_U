#include<iostream>
using namespace std;
typedef struct product
{
	int id;
	string name;
	int quantity;
	int price;
}PRD;
void disply(PRD inventory[],int& count);
void add_product(PRD inventory[], int& count);
void display_product(PRD inventory[], int& count);
void update_product(PRD inventory[], int& count);
void remove_product(PRD inventory[], int& count);
//void search_product(PRD inventory[], int& count);
int main()
{
	PRD inventory[100];
	int count = 0;
	disply(inventory,count);
	return 0;
}
void disply(PRD inventory[],int& count)
{
	int choice;
	do 
	{
		cout << "INVENTORY MANAGEMENT SYSTEM" << endl;
		cout << "1.add product\n2.display\n3.update\n4.remove\n5.search\n6.exit" << endl;
		cout << "enter your choice" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			add_product(inventory,count);
			break;
		case 2:
			display_product(inventory,count);
			break;
		case 3:
			update_product(inventory,count);
			break;
		case 4:
			remove_product(inventory,count);
			break;
		case 5:
			cout << "exiting..." << endl;
			break;
		default:
			cout << "invalid option" << endl;
		}
	} while (choice != 5);
	return;
}
void add_product(PRD inventory[], int& count)
{
	cout << "enter product id" << endl;
	cin >> inventory[count].id;
	cout << "enter product name" << endl;
	cin >> inventory[count].name;
	cout << "enter quantity" << endl;
	cin >> inventory[count].quantity;
	cout << "enter price" << endl;
	cin >> inventory[count].price;
	count++;
	cout << "product added successfully....." << endl;
}
void display_product(PRD inventory[], int& count)
{
	if (count == 0)
	{
		cout << "list is empty" << endl;
		return;
	}
	cout << "inventory list" << endl;
	for (int i = 0;i < count;i++)
	{
		cout <<"id "<< inventory[i].id << endl;
		cout << "name " << inventory[i].name << endl;
		cout << "quantity " << inventory[i].quantity << endl;
		cout << "price " << inventory[i].price << endl;
		cout << "product " << i << endl;
	}
}
void update_product(PRD inventory[], int& count)
{
	int id;
	int index = -1;
	cout << "enter the product id to update detail" << endl;
	cin >> id;
	for (int i = 0;i < count;i++)
	{
		if (inventory[i].id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "product not found" << endl;
		return;
	}
	cout << "enter new quantity" << endl;
	cin >> inventory[count].quantity;
	cout << "enter new price" << endl;
	cin >> inventory[count].price;
	cout << "product updated successfully" << endl;

}
void remove_product(PRD inventory[], int& count)
{
	int id;
	int index = -1;
	cout << "enter the product id to remove" << endl;
	cin >> id;
	for (int i = 0;i < count;i++)
	{
		if (inventory[i].id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "product not found" << endl;
		return;
	}
	for (int i = index;i < count - 1;i++)
	{
		inventory[i] = inventory[i + 1];
	}
	count--;
	cout << "product removed successfully" << endl;
}