#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums) {
   int n = nums.size();
   int answer = nums[n - 1];
   int start = 0;
   int end = n - 1;

   if (n == 1) {
      return nums[0];
   }

   while (start <= end) {
      int mid = start + (end - start) / 2;

      if (mid == 0 && nums[0] != nums[1]) {
         answer = nums[0];
         break;
      }

      if (mid == n - 1 && nums[mid] != nums[mid - 1]) {
         answer = nums[mid];
         break;
      }

      if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
         answer = nums[mid];
         break;
      }

      if (mid % 2 == 0) {
         if (nums[mid - 1] == nums[mid]) {
            end = mid - 1;
         } else {
            start = mid + 1;
         }
      } else {
         if (nums[mid] == nums[mid + 1]) {
            end = mid - 1;
         } else {
            start = mid + 1;
         }
      }
   }

   return answer;
}

int main() {
   vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 8, 8, 16};
   // vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
   // vector<int> nums = {3, 3, 7, 7, 10, 11, 11};

   cout << "Here is your single element : " << singleNonDuplicate(nums);
   return 0;
}