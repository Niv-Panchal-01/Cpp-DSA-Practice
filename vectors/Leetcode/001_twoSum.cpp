#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
time complexity : O(n)
space complexity : O(n)
*/

vector<int> twoSum(const vector<int> &arr, int target) {
   int n = arr.size();
   unordered_map<int, int> sumMap;

   for (int i = 0; i < n; i++) {
      int val = target - arr[i];
      if (sumMap.find(val) != sumMap.end()) {
         return {sumMap[val], i};
      }
      sumMap[arr[i]] = i;
   }

   return {0};
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }

   cout << endl;
}

int main() {
   vector<int> arr = {3, 3};

   printArray(twoSum(arr, 6));
   return 0;
}