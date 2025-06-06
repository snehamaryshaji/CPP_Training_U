#include"register.h"
void arithmetic::ADD()
{
	if (instruction.substr(8, 2) == "BX")
	{
		AX = AX + BX;
	}
	else if(instruction.substr(8, 2) == "CX")
	{
		AX = AX + CX;
	}
	else if (instruction.substr(8, 2) == "DX")
	{
		AX = AX + DX;
	}
	else
	{
		cout << "invalid register input";
	}
}
void arithmetic::SUB()
{
	if (instruction.substr(8, 2) == "BX")
	{
		AX = AX = BX;
	}
	else if (instruction.substr(8, 2) == "CX")
	{
		AX = AX - CX;
	}
	else if (instruction.substr(8, 2) == "DX")
	{
		AX = AX - DX;
	}
	else
	{
		cout << "invalid register input";
	}
}
void arithmetic::MUL()
{
	if (instruction.substr(8, 2) == "BX")
	{
		AX = AX * BX;
	}
	else if (instruction.substr(8, 2) == "CX")
	{
		AX = AX * CX;
	}
	else if (instruction.substr(8, 2) == "DX")
	{
		AX = AX * DX;
	}
	else
	{
		cout << "invalid register input";
	}
}
