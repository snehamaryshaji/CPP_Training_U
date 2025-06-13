#pragma once
#include<iostream>
#include<vector>
using namespace std;
class User {
public:
    string username;
    string password;
    bool signup();
    bool login();
};

