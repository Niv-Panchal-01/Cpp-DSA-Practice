#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

/*
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

vector<int> majorityElement(vector<int> &nums) {
   int n = nums.size();
   vector<int> answer;

   sort(nums.begin(), nums.end());
   int element = nums[0];
   int count = 1;
   int eleCount = 1;

   if (n == 1) {
      answer.push_back(element);
      return answer;
   } else if (n == 2) {
      answer.push_back(element);
      if (element != nums[1]) {
         answer.push_back(nums[1]);
      }
      return answer;
   }

   for (int i = 1; i < n; i++) {
      if (count == 0) {
         i--;
         element = nums[i];
      }

      if (element == nums[i]) {
         count++;
      } else if (count > n / 3) {
         answer.push_back(element);
         count = 0;
      } else {
         count = 0;
         eleCount = 1;
      }

      if (count > n / 3 && i == n - 1) {
         answer.push_back(element);
      }
   }

   return answer;
}

void printArray(vector<int> nums) {
   for (int val : nums) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> nums = {3, 3, 4};
   printArray(majorityElement(nums));
   return 0;
}