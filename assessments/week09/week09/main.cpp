#include<iostream>
#include "user.h"
#include<fstream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include<unordered_map>
using namespace std;



class record {
public:
    string msisdn;
    string opName;
    string mmc;
    string calltype;
    int duration = 0;
    double download = 0;
    double upload = 0;
    string thirdpartyID;
    string thirdpartyMmc;
public:
    bool loadFromFile(const string& line) {
        stringstream ss(line);
        string field;
        vector<string>fields;
        while (getline(ss, field, '|'))
        {
            fields.push_back(field);
            msisdn = fields[0];
            opName = fields[1];
            mmc = fields[2];
            calltype = fields[3];
            duration = stoi(fields[4]);
            download = stoi(fields[5]);
            upload = stoi(fields[6]);
            thirdpartyID = fields[7];
            thirdpartyMmc = fields[8];
        }
        return true;
    }


};
class customeruse :public record {
public:
    string brand;
    int INCcallwithNTW;
    int INCcalloutNTW;
    int OUTcallwithNTW;
    int OUTcalloutNTW;
    int INmsgwithNTW;
    int INmsgoutNTW;
    int OUTmsgoutNTW;
    int OUTmsgwithNTW;
    double download = 0;
    double upload = 0;
    /*customeruse()
    {
        INCcallwithNTW=0;
        INCcalloutNTW=0;
        OUTcallwithNTW=0;
        OUTcalloutNTW=0;
        INmsgwithNTW=0;
        INmsgoutNTW=0;
        OUTmsgoutNTW=0;
        OUTmsgwithNTW=0;
    }*/
    void printusage()
    {
        cout << "# customers database :" << endl;
        cout << "customer id" << msisdn << "(" << opName << ")" << endl;
        cout << "services within the mobile operator" << endl;
        cout << "incoming voice call duration" << INCcallwithNTW << endl;
        cout << "outgoing voice call duration" << OUTcallwithNTW << endl;
        cout << "incoming massages" << INmsgwithNTW << endl;
        cout << "outgoing massages" << OUTmsgwithNTW << endl;


        cout << "services outside the mobile operator" << endl;
        cout << "incoming voice call duration" << INCcalloutNTW << endl;
        cout << "outgoing voice call duration" << OUTcalloutNTW << endl;
        cout << "incoming massages" << INmsgoutNTW << endl;
        cout << "outgoing massages" << OUTmsgoutNTW << endl;
        cout << "internet use" << endl;
        cout << "MB downloaded " << download << "|" << "MB uploaded " << upload << endl;

    }
};
class oparatoruse {
    string brand;
    int inccallduration;
    int outcallduration;
    int incmsg;
    int outmsg;
    double download = 0;
    double upload = 0;
    void printusage()
    {
        cout << "# customers database :" << endl;
        cout << "operator brand " << brand << endl;
        cout << "incoming voice call duration " << inccallduration << endl;
        cout << "outgoing voice call duration " << outcallduration << endl;
        cout << "incoming SMS messages " << incmsg << endl;
        cout << "outing SMS messages " << outmsg << endl;
        cout << "MB downloaded " << download << "|" << "MB uploaded " << upload << endl;

    }

};
class processrec {
public:
    unordered_map<string, customeruse>customerData;
    unordered_map<string, oparatoruse >operatorData;
    bool is_sameop(string& op1, string& op2)
    {
        return op1 == op2;
    }
    void process(const record& r)
    {
        customeruse& customer = customerData[r.msisdn];
        customer.brand = r.opName;
        if (r.calltype == "MOC")
        {
            if (is_sameop(r.thirdpartyID, r.thirdpartyMmc))
            {
                customer.OUTcalloutNTW = r.duration;
            }
            else
            {
                customer.OUTcallwithNTW = r.duration;
            }
        }
        else if (r.calltype == "MTC")
        {
            customer.OUTcallwithNTW = r.duration;
        }
    }
};
int main()
{
	User newu;
	bool logged = false;
	cout << "-----------Welcome------------" << endl;

	while (!logged) {
		int choice;
		cout << "\n1. Sign Up\n2. Login\n3. Exit\nChoice: ";
		cin >> choice;

		if (choice == 1)
		{
			newu.signup();
		}
		else if (choice == 2)
		{
			logged = newu.login();
		}
		else if (choice == 3)
		{
			return 0;
		}
	}
	ifstream file("input.txt");
	if (!file.is_open())
	{
		cerr << "error opening the file" << endl;
	}
	string line;
	processrec p;
	getline(file, line);
	while (getline(file, line))
	{
		record r;
		r.loadFromFile(line);
	}
	return 0;
}