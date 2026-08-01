#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
time complexity : O(n)
space complexity : O(n)
*/

int getLongestSubarrayWithsumK(const vector<int> &arr, int k) {
   int n = arr.size();
   int maxSum = 0;
   int sum = 0;
   unordered_map<int, int> preSumMap;

   for (int i = 0; i < n; i++) {
      sum += arr[i];

      if (sum == k) {
         maxSum = max(maxSum, i + 1);
      }
      int rem = sum - k;

      if (preSumMap.find(rem) != preSumMap.end()) {
         int len = i - preSumMap[rem];
         maxSum = max(maxSum, len);
      }
      if (preSumMap.find(sum) == preSumMap.end()) {
         preSumMap[sum] = i;
      }
   }
   return maxSum;
}

int main() {
   vector<int> arr = {2, -1, 1, 3};

   cout << "Your answer is : " << getLongestSubarrayWithsumK(arr, 3);
   return 0;
}