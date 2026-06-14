#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int> nums, int target) {
   int n = nums.size();
   int start = 0;
   int end = n - 1;

   while (start <= end) {
      int mid = (start + end) / 2;

      if (nums[mid] < target) {
         start = mid + 1;
      } else if (nums[mid] > target) {
         end = mid - 1;
      } else {
         return mid;
      }
   }

   return -1;
}

int main() {
   vector<int> nums = {1, 2, 5, 5, 8, 14, 16};
   int target = 16;

   cout << "Your target index is : " << findTarget(nums, target);
   return 0;
}