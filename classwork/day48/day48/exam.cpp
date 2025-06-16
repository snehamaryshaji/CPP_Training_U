#include"cdr.h"
#include<fstream>
#include<sstream>
int main()
{
    ifstream file("input.txt");
    if (!file.is_open())
    {
        cerr << "error opening the file" << endl;
    }
    vector<string>fields;
    string field;
    string line;
    while(getline(file,line))
    { 
        stringstream ss(line);
        while (getline(ss, field, '|'))
        {
            if (field.empty())
            {
                //cout << "empty field" << endl;
                fields.push_back("gprsFound");
            }
            fields.push_back(field);
        }
    }
    customer po(fields);
    po.print();

   /* for (auto i : fields)
    {
        cout << i << "  ";
    }*/
    return 0;
}