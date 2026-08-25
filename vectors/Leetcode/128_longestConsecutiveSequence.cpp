#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Time complexity : O(n)
Space complexity : O(n)
*/

int longestConsecutiveSequence(const vector<int> &arr) {
   int n = arr.size();
   int maxSequence = 1;
   int currentSequence = 1;

   if (n == 0) {
      return 0;
   }

   unordered_set<int> set;

   for(int i = 0; i < n; i++){
      set.insert(arr[i]);
   }

   //Time complexity : O(2n)
   for(int i = 0; i < n; i++){
      if(set.find(arr[i] - 1) == set.end()){
         int element = arr[i];
         while(set.find(element + 1) != set.end()){
            currentSequence++;
            maxSequence = max(maxSequence, currentSequence);
            element++;
         }
         currentSequence = 1;
      }
   }
   

   return maxSequence;
}

int main() {
   vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
   // vector<int> arr = {1, 0, 1, 2};
   // vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
   // vector<int> arr = {100, 4, 200, 1, 3, 2};

   cout << "Longest consecutive sequence : " << longestConsecutiveSequence(arr)
        << endl;

   return 0;
}