#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

string isBalanced(string s) {
    stack<char> st;
    unordered_map<char, char> bracket_map = { {')', '('}, {']', '['}, {'}', '{'} };

    for (char ch : s) {
        if (bracket_map.count(ch)) {
            if (st.empty() || st.top() != bracket_map[ch]) {
                return "NO";
            }
            st.pop();
        }
        else {
            st.push(ch);
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}