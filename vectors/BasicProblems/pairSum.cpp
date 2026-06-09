// Here, the problem is to find target sum like 2 sum where vector is positive
// and sorted.
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
   int n = 0;
   int k = nums.size() - 1;
   while (n < k) {
      int sum = nums[n] + nums[k];
      if (sum == target) {
         return {n, k};
      } else if (sum < target) {
         n++;
      } else {
         k--;
      }
   }
}
int main() {
   vector<int> nums = {1, 5, 10, 12, 16, 20};
   vector<int> answer = twoSum(nums, 17);

   cout << "Here is your index vector : ";

   for (int val : answer) {
      cout << val << ' ';
   }
   return 0;
}