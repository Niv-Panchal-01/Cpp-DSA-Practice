#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
Time complexity : O(n log n)
Space complexity : O(log n)
*/

int longestConsecutiveSequence(vector<int> &arr) {
   int n = arr.size();
   int maxSequence = 1;
   int currentSequence = 1;

   if (n == 0) {
      return 0;
   }

   sort(arr.begin(), arr.end());

   for (int i = 0; i < n - 1; i++) {
      if (arr[i] + 1 == arr[i + 1]) {
         currentSequence++;
         maxSequence = max(maxSequence, currentSequence);
      } else if (arr[i] != arr[i + 1]) {
         currentSequence = 1;
      }
   }

   return maxSequence;
}

int main() {
   vector<int> arr = {1, 0, 1, 2};
   // vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
   // vector<int> arr = {100, 4, 200, 1, 3, 2};

   cout << "Longest consecutive sequence : " << longestConsecutiveSequence(arr)
        << endl;

   return 0;
}