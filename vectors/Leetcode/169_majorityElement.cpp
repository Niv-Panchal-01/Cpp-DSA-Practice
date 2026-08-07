#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
time complexity : O(n)
space complexity : O(1)
*/

int majorityElement(const vector<int> &nums) {
   int n = nums.size();
   unordered_map<int, int> maxMap;

   for (int val : nums) {
      maxMap[val]++;
      if (maxMap[val] > n / 2) {
         return val;
      }
   }

   return 0;
}

int main() {
   vector<int> nums = {16, 7, 16, 6, 16, 4, 16, 4, 16};

   cout << "Here is your majority element : " << majorityElement(nums);
   return 0;
}