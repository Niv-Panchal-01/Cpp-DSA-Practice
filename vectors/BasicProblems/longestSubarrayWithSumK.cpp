#include <iostream>
#include <vector>
using namespace std;

/*
time complexity : O(2n) = O(n)
space complexity : O(1)
*/

// This solution is only for positive integers and zeros
int getLongestSubarrayWithsumK(const vector<int> &arr, int k) {
   int n = arr.size();
   int maxLen = 0;
   int sum = arr[0];
   int i = 0, j = 0;

   while (j < n) {
      while (i <= j && sum > k) {
         sum -= arr[i];
         i++;
      }

      if (sum == k) {
         maxLen = max(maxLen, j - i + 1);
      }

      j++;
      if (j < n) {
         sum += arr[j];
      }
   }

   return maxLen;
}

int main() {
   // vector<int> arr = {2, 0, 0, 3};
   vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};

   cout << "Your answer is : " << getLongestSubarrayWithsumK(arr, 5);
   return 0;
}