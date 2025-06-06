#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Microprocessor{
	protected:
	int AX, BX, CX, DX;
	string instruction;
	vector<int>Memory;
public:

	Microprocessor(string instruction):instruction(instruction){
	}
	//void getInstruction();
	
	int get_memoryValue(int);
	void set_memory_value(int,int);
	void disp();
	void task();
};
class MOV: public Microprocessor{
public:
	MOV(string instruction) :Microprocessor(instruction) {
	void reg_to_reg();
	void value_memory_to_reg();
	void value_reg_to_memoryadd();
	void addvalue_to_memoryadd();
	void add_change_memoryadd();
};
class arithmetic :public Microprocessor {
public:
	arithmetic(string instruction) :Microprocessor(instruction) {}
	void ADD();
	void SUB();
	void MUL();
	void DIV();
};