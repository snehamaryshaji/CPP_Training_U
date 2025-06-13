#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class customer {

	string msisdn;
	string opName;
	int code;
	vector<int>moc;
	int smsMo;
	int smsMt;
public:
    bool loadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error: Cannot open " << filename << endl;
            return false;
        }

        string line;
        if (getline(file, line)) {
            msisdn = strstr(1, 7);

        }
    }
        void setMsid(string id)
        {
            msisdn = id;
        }
        void callDurationSameop();
        void callDurationDiffop();

};
class oparator{
	vector<int>mtc;
	int msgMT;
	int msgMO;
};