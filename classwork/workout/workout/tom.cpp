//insert({ key, value })	========Inserts a key - value pair
//emplace(key, value)==========	Constructs in - place
//erase(key)=============	Removes the element with the given key
//find(key)==============Returns iterator to key or end()
//clear()	==============Removes all elements
//size()=================	Returns number of elements
//empty()	================Checks if map is empty
//at(key)===============	Access value at key(throws if key not found)
//operator[]	===========Access / Insert value at key
//count(key)	=============Returns 1 if key exists, 0 otherwise
//begin(), end()	=========Iterators
//lower_bound(key)========	First not less than key
//upper_bound(key)===============	First greater than key
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> students;

    // Insert using insert()
    students.insert({ 101, "Alice" });
    students.insert({ 102, "Bob" });

    // Insert using operator[]
    students[103] = "Charlie";

    // Insert using emplace()
    students.emplace(104, "Diana");

    // Access using at()
    std::cout << "Student 102: " << students.at(102) << "\n";

    // Access using operator[]
    std::cout << "Student 103: " << students[103] << "\n";

    // Check size
    std::cout << "Total students: " << students.size() << "\n";

    // Check existence using count()
    if (students.count(105) == 0)
        std::cout << "Student 105 not found.\n";

    // Find element
    auto it = students.find(101);
    if (it != students.end())
        std::cout << "Found Student 101: " << it->second << "\n";

    // Erase a student
    students.erase(102);
    std::cout << "After erasing 102, size: " << students.size() << "\n";

    // Iterate over the map
    std::cout << "All students:\n";
    for (const auto& pair : students) {
        std::cout << "Roll: " << pair.first << ", Name: " << pair.second << "\n";
    }

    // lower_bound and upper_bound
    std::cout << "Lower bound of 103: " << students.lower_bound(103)->first << "\n";
    if (students.upper_bound(103) != students.end())
        std::cout << "Upper bound of 103: " << students.upper_bound(103)->first << "\n";

    // Clear all entries
    students.clear();
    std::cout << "Map cleared. Empty? " << std::boolalpha << students.empty() << "\n";

    return 0;
}
//i/*nsert({ key, value })	Insert a key - value pair
//emplace(key, value)	Construct and insert in - place
//erase(key)	Remove all pairs with the given key
//erase(iterator)	Remove element at iterator
//find(key)	Returns iterator to first element matching key
//count(key)	Returns number of pairs with the key
//equal_range(key)	Returns range of elements with the same key
//clear()	Clears the container
//size()	Number of elements
//empty()	Checks if map is empty
//begin(), end()	Iterators to traverse the container
//lower_bound(key)	First element not less than key
//upper_bound(key)	First element greater than key*/
#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> department;

    // Insert employees into departments
    department.insert({ "HR", "Alice" });
    department.insert({ "HR", "Bob" });
    department.insert({ "IT", "Charlie" });
    department.insert({ "IT", "David" });
    department.insert({ "Finance", "Eve" });

    // Emplace
    department.emplace("IT", "Irene");

    // Display all entries
    std::cout << "Department Employees:\n";
    for (const auto& entry : department) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    // Count number of employees in HR
    std::cout << "\nHR has " << department.count("HR") << " employees.\n";

    // Find first occurrence of key
    auto it = department.find("Finance");
    if (it != department.end()) {
        std::cout << "\nFirst employee in Finance: " << it->second << "\n";
    }

    // Display all employees in IT using equal_range
    auto range = department.equal_range("IT");
    std::cout << "\nIT Department Employees:\n";
    for (auto itr = range.first; itr != range.second; ++itr) {
        std::cout << itr->second << "\n";
    }

    // Erase one IT employee using iterator
    if (range.first != department.end())
        department.erase(range.first);

    // Display after erasing
    std::cout << "\nAfter erasing one IT employee:\n";
    for (const auto& entry : department) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    // Clear the map
    department.clear();
    std::cout << "\nMultimap cleared. Is empty? " << std::boolalpha << department.empty() << "\n";

    return 0;
}