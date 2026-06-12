#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
   int n = nums.size();
   vector<int> answer(n, 1);

   // prefix
   for (int i = 1; i < n; i++) {
      answer[i] = answer[i - 1] * nums[i - 1];
   }

   // suffix
   int suffix = 1;
   for (int j = n - 2; j >= 0; j--) {
      suffix = suffix * nums[j + 1];
      answer[j] *= suffix;
   }

   return answer;
}

void printVector(vector<int> nums) {
   for (int val : nums) {
      cout << val << ' ';
   }
}

int main() {
   vector<int> nums = {1, 2, 3, 4};
   vector<int> newVector = productExceptSelf(nums);
   cout << "Here is your new array : ";
   printVector(newVector);

   return 0;
}