#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class customer
{
    string msisdn;
    string opName;
    string mmc;
    string calltype;
    string duration ;
    string download ;
    string upload ;
    string thirdpartyID;
    string thirdpartyMmc;
    //vector<string>v;
public:
    customer(const vector<string>& fields)
    {

        msisdn = fields[0];
        opName = fields[1];
        mmc = fields[2];
        calltype = fields[3];
        duration = fields[4];
        download = fields[5];
        upload = fields[6];
        thirdpartyID = fields[7];
        thirdpartyMmc = fields[8];
    }
    void print()
    {
        cout << msisdn << endl;
        cout<<opName<<endl ;
        cout<<mmc<<endl;
        cout << calltype << endl;;
        cout << duration << endl;;
        cout<<download<<endl;
        cout<<upload<<endl;
       cout<< thirdpartyID<<endl ;
        cout<<thirdpartyMmc<<endl;
    }
};