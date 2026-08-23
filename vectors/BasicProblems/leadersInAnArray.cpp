/*
Example 1:
Input:
 arr = [4, 7, 1, 0]
Output:
 7 1 0
Explanation:
 The rightmost element (0) is always a leader.
7 and 1 are greater than the elements to their right, making them leaders as
well.

Example 2:
Input:
 arr = [10, 22, 12, 3, 0, 6]
Output:
 22 12 6
Explanation:
 6 is a leader because there are no elements after it.
12 is greater than all the elements to its right (3, 0, 6), and 22 is greater
than 12, 3, 0, 6, making them leaders as well.
*/

/*
Time complexity : O(n ^ 2)
Space complexity : O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> leadersInArray(const vector<int> &arr) {
   int n = arr.size();
   vector<int> answer;

   for (int i = 0; i < n; i++) {
      bool isLeader = true;
      for (int j = i + 1; j < n; j++) {
         if (arr[i] < arr[j]) {
            isLeader = false;
            break;
         }
      }

      if (isLeader) {
         answer.push_back(arr[i]);
      }
   }

   return answer;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> arr = {10, 22, 12, 3, 0, 6};
   // vector<int> arr = {4, 7, 1, 0};

   cout << "Your answer is  : ";
   printArray(leadersInArray(arr));

   return 0;
}