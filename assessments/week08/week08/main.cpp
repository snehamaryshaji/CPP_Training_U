#include"register.h"
#include<cstring>
#include<fstream>
int main()
{
    /*ifstream inFile("instructions.txt");
    if (!inFile.is_open()) {
        cerr << "Error opening file!" << endl;
    }
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }*/
    
    ifstream file("instructions.txt",ios::in);
   /* if (!file) {
        cerr << "Cannot open instructions.txt\n";
    }*/
    char line[100];
    int pc = 1;
    while (file.getline(line, sizeof(line))) {
        if (strncmp(line, "HALT", 3) == 0) {
            cout << "HLT found at line " << pc << ". Halting.\n";
            break;
        }
        Microprocessor cpu(line);
        pc++;
        cpu.ADD();
        cpu.disp();
    }
    file.close();
    return 0;
}