#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int> &nums) {
   int n = nums.size();

   for (int i = 0; i < n; i++) {
      int frequency = 0;
      for (int j = 0; j < n; j++) {
         if (nums[i] == nums[j]) {
            frequency++;
         }
      }

      if (frequency > n / 2) {
         return nums[i];
      }
   }
   return 0;
}

int main() {
   vector<int> nums = {16, 7, 16, 6, 16, 4, 16, 4, 16};

   cout << "Here is your majority element : " << majorityElement(nums);
   return 0;
}