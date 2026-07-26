#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> unionOfTwoArrays(const vector<int> &arr1, const vector<int> &arr2) {
   set<int> newSet;

   for (int val : arr1) {
      newSet.insert(val);
   }
   for (int val : arr2) {
      newSet.insert(val);
   }

   return newSet;
}

void printSet(const set<int> &s) {
   for (int val : s) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> arr1 = {1, 1, 2, 3, 4, 5};
   vector<int> arr2 = {2, 2, 3, 4, 4, 5, 6};

   printSet(unionOfTwoArrays(arr1, arr2));
   return 0;
}