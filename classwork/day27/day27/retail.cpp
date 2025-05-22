#include "retail.h"
bool inventory::add_item(int qnty,const char* names,int code)
{
	id = code;
	strcpy(name, names);
	quantity = qnty;
	updateQnty(qnty);
	return true;
}
bool inventory::updateQnty(int new1)
{
	stock = stock-new1;
	return true;

}
bool inventory:: updateName(const char* n, int code)
{
	if (id == code)
	{
		strcpy(name, n);
		return true;
	}
	else
	{
		return false;
	}
}