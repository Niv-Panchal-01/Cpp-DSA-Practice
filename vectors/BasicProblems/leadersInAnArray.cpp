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
Time complexity : O(n)
Space complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leadersInArray(const vector<int> &arr) {
   int n = arr.size();
   vector<int> answer;
   int maxElement = arr[n - 1];
   answer.push_back(maxElement);

   for(int i = n - 2; i >= 0; i--){
      if(maxElement < arr[i]){
         maxElement = arr[i];
         answer.push_back(maxElement);
      }
   }

   reverse(answer.begin(), answer.end());
   return answer;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   // vector<int> arr = {10, 22, 12, 3, 0, 6};
   vector<int> arr = {4, 7, 1, 0};

   cout << "Your answer is  : ";
   printArray(leadersInArray(arr));

   return 0;
}