#include <iostream>
#include <forward_list>
int main() {
    std::forward_list<int> fl = { 3, 1, 4, 1, 5 };

    // Insert and Erase
    auto it = fl.before_begin();
    fl.insert_after(it, 9);
    //fl.erase_after(it);
    std::cout << " List: ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";

    // Remove and Unique
    fl.remove(1);
    fl.push_front(3);
    fl.unique();  // Remove consecutive duplicates
    // Sort and Reverse
    fl.sort();
    fl.reverse();

    // Merge
    std::forward_list<int> fl2 = { 0, 2, 6 };
    fl2.sort();
    fl.merge(fl2);// Both must be sorted

    std::cout << "Final List: ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";
    return 0;
}