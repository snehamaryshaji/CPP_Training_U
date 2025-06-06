#include"register.h"
//void Microprocessor::task()
//{
//		if (instruction.find("ADD"))
//		{
//			ADD();
//		}
//		else if (instruction.find("SUB"))
//		{
//			SUB();
//		}
//		else if (instruction.find("MUL"))
//		{
//			MUL();
//		}
//		else if (instruction.find("DIV"))
//		{
//			DIV();
//		}
//		else
//		{
//			cout << "invalid input!!!!!!!!!!" << endl;
//		}
//}
//void Microprocessor::getInstruction()
//{
//	if (instruction.find("MOVE"))
//	{
//		string inst = "MOVE";
//	}
//	else if (instruction.find("ADD"))
//	{
//		string inst = "ADD";
//	}
//	else if (instruction.find("SUB"))
//	{
//		string inst = "SUB";
//	}
//	else if (instruction.find("DEV"))
//	{
//		string inst = "DEV";
//	}
//	else if (instruction.find("MUL"))
//	{
//		string inst = "MUL";
//	}
//}
void Microprocessor::disp()
{
	cout << "snapshot of the processor" << endl;
	cout << "AX    " << AX << endl;
	cout << "BX    " << AX << endl;
	cout << "CX    " << AX << endl;
	cout << "DX    " << AX << endl;
}
int Microprocessor::get_memoryValue(int addr)
{
	//return Memory[addr];
	return Memory.at(addr);
}
void Microprocessor::set_memory_value(int add,int AX)
{
	//Memory[add] = AX;
	Memory.push_back(AX);
}
//void MOV::value_toAX()
//{
//	if (instruction.find("MOVE AX,["))
//	{
//		string value = instruction.substr(8, 1);
//		AX=get_memoryvalue(stoi(value));
//		
//	}
//	else
//	{
//		string value = instruction.substr(8, 3);
//		AX = (stoi(value));
//	}
//}