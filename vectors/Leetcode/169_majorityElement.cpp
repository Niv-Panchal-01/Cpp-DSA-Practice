#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums) {
   int size = nums.size();
   int answer = 0;
   int frequency = 0;

   for (int i = 0; i < size; i++) {
      if (frequency == 0) {
         answer = nums[i];
      }
      if (answer == nums[i]) {
         frequency++;
      } else {
         frequency--;
      }
   }
   return answer;
}

int main() {
   vector<int> nums = {16, 7, 16, 6, 16, 4, 16, 4};

   cout << "Here is your majority element : " << majorityElement(nums);
   return 0;
}