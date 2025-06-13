#include"user.h"



vector<User>users;
User newuser;
bool signup() {
    cout << "Enter username: "<<endl;
    cin >> newuser.username;
    cout << "Enter password: ";
    cin >> newuser.password;


    users.push_back(newuser);
    cout <<"successfully signedup"<<endl;
    return true;
}


bool login() {
    string uname, pass;
    cout << "Enter username: "<<endl;
    cin >> uname;
    cout << "Enter password: "<<endl;
    cin >> pass;

    for (User u : users) {
        if (u.username == uname && u.password == pass) {
            cout << "Login successful"<<endl;
            return true;
        }
    }

    cout << "Invalid credentials"<<endl;
    return false;
}
