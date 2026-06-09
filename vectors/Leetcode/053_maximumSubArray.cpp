#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums) {
   int maxSum = INT32_MIN;
   int currentSum = 0;
   for (int i = 0; i < nums.size(); i++) {
      currentSum += nums[i];
      maxSum = max(maxSum, currentSum);
      if (currentSum < 0) {
         currentSum = 0;
      }
   }

   return maxSum;
}

int main() {
   vector<int> nums = {5, 4, 16, -1, 7, 8, 4};
   cout << "Your max sum is : " << maxSubArray(nums);

   return 0;
}