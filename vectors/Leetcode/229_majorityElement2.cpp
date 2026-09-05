#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/

vector<int> majorityElement(vector<int> &nums) {
   int n = nums.size();
   vector<int> answer;
   unordered_map<int, int> uMap;

   for (int i = 0; i < n; i++) {
      int Element = nums[i];
      uMap[Element]++;
   }

   for (int i = 0; i < n; i++) {
      int Element = nums[i];
      if (uMap[Element] > n / 3) {
         answer.push_back(Element);
         uMap[Element] = 0;
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
   vector<int> nums = {3,3,4};
   printArray(majorityElement(nums));
   return 0;
}