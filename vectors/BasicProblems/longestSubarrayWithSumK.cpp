#include <iostream>
#include <vector>
using namespace std;

// only for positive numbers
int getLongestSubarrayWithsumK(const vector<int> &arr, int k) {
   int n = arr.size();
   int maxSum = 0;

   for (int i = 0; i < n; i++) {
      int sum = 0;
      int counter = 0;
      for (int j = i; j < n; j++) {
         sum += arr[j];
         if (sum == k) {
            maxSum = max(maxSum, j - i + 1);
            break;
         }
      }
   }

   return maxSum;
}

int main() {
   vector<int> arr = {10, 5, 2, 7, 1, 9};

   cout << "Your answer is : " << getLongestSubarrayWithsumK(arr, 15);
   return 0;
}