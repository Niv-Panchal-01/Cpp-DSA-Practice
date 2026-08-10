#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(1)
*/

int maxSubArray(const vector<int> &nums) {
   int n = nums.size();
   int maxSum = INT32_MIN;
   for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
         sum += nums[j];
         maxSum = max(maxSum, sum);
      }
   }

   return maxSum;
}

int main() {
   vector<int> nums = {-1, 5, 3, -8, 16, -9};
   cout << "Here is your max sum : " << maxSubArray(nums);
   return 0;
}