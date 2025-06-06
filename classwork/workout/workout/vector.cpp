#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec = { 2,4,5,6 };
    // 1. Normal Iterator
    std::cout << "Using normal iterator:\n";
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
   vec. push_back(234);//add at the end
   vec.push_back(235);
   vec.pop_back();
   //std::vector<int>::iterator it;
   for (it = vec.begin(); it != vec.end(); ++it) {
       std::cout << *it << " ";
   }
   std::cout << "\n";
   cout << "element at 4 pos " << vec.at(4) << endl;
   vec.insert(vec.begin() + 1, 15);
   std::cout << "After insert at position 1: ";
   cout << "element at 4 pos " << vec.at(1) << endl;
   vec.erase(vec.begin() + 2);
   std::cout << "After erase at position 2: ";
  
  // cout << "element at 2 pos " << vec.at(2) << endl;
   for (it = vec.begin(); it != vec.end(); ++it) {
       std::cout << *it << " ";
   }
	return 0;
}
