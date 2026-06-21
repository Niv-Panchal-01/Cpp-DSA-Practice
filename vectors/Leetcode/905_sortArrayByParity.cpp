#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums) {
   int n = 0;
   int k = nums.size() - 1;

   while (n < k) {
      if (nums[n] % 2 == 0) {
         n++;
      } else if (nums[k] % 2 == 0) {
         int val = nums[n];
         nums[n] = nums[k];
         nums[k] = val;
         n++;
         k--;
      } else {
         k--;
      }
   }

   return nums;
}

void printArray(vector<int> nums) {
   for (int val : nums) {
      cout << val << endl;
   }
}

int main() {
   vector<int> nums = {10, 5, 16, 4, 1, 7, 8};
   printArray(sortArrayByParity(nums));
   return 0;
}