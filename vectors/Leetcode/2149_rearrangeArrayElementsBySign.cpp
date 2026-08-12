#include <iostream>
#include <vector>
using namespace std;

/*
Time complexity : O(n ^ 2)
Space Complexity : O(1)
*/

vector<int> rearrangeArrayElements(vector<int> &nums) {
   int n = nums.size();
   int j = 0;
   int count = 0;

   for (int i = 0; i < n; i++) {
      if (j % 2 == 0) { // for positive elements
         if (nums[j] > 0) {
            j++;
            count++;
         } else if (nums[i] > 0) {
            swap(nums[i], nums[j]);
            j++;
            count++;
            while (count < i) {
               swap(nums[count], nums[i]);
               count++;
            }
            count = j;
            i--;
         }
      } else { // for negative elements
         if (nums[j] < 0) {
            j++;
            count++;
         } else if (nums[i] < 0) {
            swap(nums[i], nums[j]);
            j++;
            count++;
            while (count < i) {
               swap(nums[count], nums[i]);
               count++;
            }
            count = j;
            i--;
         }
      }
   }

   return nums;
}

void printArray(const vector<int> &nums) {
   for (int val : nums) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> arr = {-37, -10, -9, 14, 15, 31};

   cout << "rearranged array : ";
   printArray(rearrangeArrayElements(arr));

   return 0;
}