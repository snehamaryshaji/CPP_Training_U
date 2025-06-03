/*#include <iostream>
#include <vector>
#include <algorithm> // For sort()

int main() {
    // Sample data
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

    // Ascending order
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Ascending Order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Descending order
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Descending Order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/
#include <iostream>
#include <array>
#include <algorithm> // For std::sort

int main() {
    // Define a std::array
    std::array<int, 5> arr = { 5, 2, 8, 1, 3 };

    // Ascending order
    std::sort(arr.begin(), arr.end());
    std::cout << "Ascending order: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Descending order
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::cout << "Descending order: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

