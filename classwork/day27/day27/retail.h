#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class inventory
{
	int id;
	char name[30];
	int quantity;
	int stock;
public:
	bool add_item(int ,const char*,int);
    bool search(string,int);
	bool updateName(const char*, int);
	bool updateItemCode(string, int);
	bool updateQnty(int);
	bool deleteByCode(int);

};