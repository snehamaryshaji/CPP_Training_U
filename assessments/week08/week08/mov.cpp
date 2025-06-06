#include"register.h"
void MOV::reg_to_reg()
{
    string res=instruction.substr(8,3);
    int res1 = stoi(res);
    AX = res1;
}
void MOV::value_memory_to_reg()
{
    string res = instruction.substr(10, 1);
        int res1 = stoi(res);
        AX = get_memoryValue(res1);
}
void MOV::value_reg_to_memoryadd()
{
    string res = instruction.substr(6, 1);
    int res1 = stoi(res);
    set_memory_value(res1, AX);
}
void MOV::addvalue_to_memoryadd()
{
    string value = instruction.substr(8,3);
    int res1 = stoi(value);
    set_memory_value(res1, AX);
}
void MOV::add_change_memoryadd()
{
    string dest = instruction.substr(6, 1);
    string src = instruction.substr(11, 1);
    int res1 = stoi(dest);
    int res2 = stoi(src);
    set_memory_value(res1, res2);
}