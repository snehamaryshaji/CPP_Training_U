#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;

    // Insert using insert()
    students.insert({ 101, "Alice" });
    students.insert({ 102, "Bob" });

    // Insert using operator[]
    students[103] = "Charlie";

    // Insert using emplace()
    students.emplace(104, "Diana");

    // Access using at()
    std::cout << "Student 102: " << students.at(102) << "\n";
    cout << students.lower_bound(101)->first;

    cout << "All students:\n";
    for (const auto& pair : students) 
    {
        cout << "Roll: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}