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
   vector<int> nums = {-1, 5, 3, -8, 16, -9};
   cout << "Here is your max sum : " << maxSubArray(nums);
   return 0;
}