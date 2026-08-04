#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
time complexity : O(n log n)
space complexity : O(log n)
*/

vector<int> twoSum(vector<int> &arr, int target) {
   int n = arr.size();
   sort(arr.begin(), arr.end());

   int low = 0, high = n - 1;

   while (low < high) {
      int sum = arr[low] + arr[high];
      if (sum == target) {
         return {low, high};
      } else if (sum > target) {
         high--;
      } else {
         low++;
      }
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
   vector<int> arr = {3, 2, 4};

   printArray(twoSum(arr, 6));
   return 0;
}