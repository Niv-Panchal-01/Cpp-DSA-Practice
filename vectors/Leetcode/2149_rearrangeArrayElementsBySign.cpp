#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

vector<int> rearrangeArrayElements(vector<int> &nums) {
   int n = nums.size();
   vector<int> temp(n);
   int pos = 0;
   int neg = 1;

   for (int i = 0; i < n; i++) {
      if (nums[i] > 0) {
         temp[pos] = nums[i];
         pos += 2;
      } else {
         temp[neg] = nums[i];
         neg += 2;
      }
   }

   return temp;
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