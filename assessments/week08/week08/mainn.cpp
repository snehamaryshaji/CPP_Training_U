#include"register.h"
#include<cstring>
#include<fstream>
int main()
{

    ifstream input("instructions.txt", ios::in);
    if (!input) {
        cerr << "Cannot open instructions.txt\n";
        return 1;
    }
    char line[100];
    int pc = 1;
    while (file.getline(line, sizeof(line))) {
        if (strncmp(line, "HALT", 4) == 0) 
            cout << "HLT found at line " << pc << ". Halting.\n";
            break;
        }
        string inst(line);
        if (inst.find("ADD") != string::npos || inst.find("SUB") != string::npos ||
            inst.find("DIV") != string::npos || inst.find("MUL") != string::npos)
        {
            arithemetic cpu(inst);
            if (inst.find("ADD") != string::npos)
            {
                cpu.ADD();
            }
            else if (inst.find("SUB") != string::npos)
            {
                cpu.SUB();
            }
            else if (inst.find("DIV") != string::npos)
            {
                cpu.DIV();
            }
            else if (inst.find("MUL") != string::npos)
            {
                cpu.MUL();
            }
            cpu.disp();
        }
        else if (inst.find("MOV") != string::npos)
        {
            MOV cpu(inst);
            cpu.disp();
        }
        else
        {
            cout << "unknown instruction " << endl;
        }
        pc++;
    }
    input.close();
    return 0;
}