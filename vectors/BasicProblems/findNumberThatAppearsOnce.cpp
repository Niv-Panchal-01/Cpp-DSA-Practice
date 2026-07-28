/*
Find the number that appears once, and the other numbers twice
Problem Statement: Given a non-empty array of integers arr, every element
appears twice except for one. Find that single one.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int getNumberThatAppearsOnce(const vector<int> &arr) {
   unordered_map<int, int> ump;
   for (const int &val : arr) {
      ump[val]++;
   }

   for (const auto &val : ump) {
      if (val.second == 1) {
         return val.first;
      }
   }

   return 0;
}

int main() {
   vector<int> arr = {2, 2, 1, 1, 16, 5, 6, 7, 7, 6, 5, 8, 9, 8, 9};

   cout << "Here is the number that appears once in your array : "
        << getNumberThatAppearsOnce(arr);
   return 0;
}