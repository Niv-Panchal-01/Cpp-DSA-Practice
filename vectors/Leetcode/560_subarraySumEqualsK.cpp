#include <iostream>
#include <vector>
using namespace std;

/*Brute Force Approach
Time Complexity : O(n ^ 2)
Space Complexity : O(1)
*/

int subarraySum(vector<int> &nums, int k) {
   int n = nums.size();
   int answer = 0;

   for(int i = 0; i < n; i++){
      int sum = 0;

      for(int j = i; j < n; j++){
         sum += nums[j];

         if(sum == k){
            answer++;
         }
      }
   }

   return answer;
}


int main(){
   vector<int> nums = {1,2,3};
   int k = 3;

   cout << "the total number of subarrays whose sum equals to k is : " << subarraySum(nums, k);

   return 0;
}