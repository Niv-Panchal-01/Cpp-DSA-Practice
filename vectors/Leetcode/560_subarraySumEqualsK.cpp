#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*Brute Force Approach
Time Complexity : O(n ^ 2)
Space Complexity : O(1)
*/

int subarraySum(vector<int> &nums, int k) {
   int n = nums.size();
   int answer = 0;
   unordered_map<int, int> answerMap;
   int prefixSum = 0;
   answerMap[prefixSum] = 1;

   for (int i = 0; i <= n; i++) {
      prefixSum += nums[i];
      int remove = prefixSum - k;
      answer += answerMap[remove];
      answerMap[prefixSum]++;
      
   }

   return answer;
}

int main() {
   vector<int> nums = {0, 0, 0};
   int k = 0;

   cout << "the total number of subarrays whose sum equals to k is : "
        << subarraySum(nums, k);

   return 0;
}