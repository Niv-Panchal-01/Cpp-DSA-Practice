#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
Time complexity : O(n)
Space complexity : O(1)
*/

vector<int> nextPermutation(vector<int> &arr) {
   int n = arr.size();
   int index = -1;

   for (int i = n - 2; i >= 0; i--) {
      if (arr[i] < arr[i + 1]) {
         index = i;
         break;
      }
   }

   if (index == -1) {
      reverse(arr.begin(), arr.end());
      return arr;
   }

   for (int i = n - 1; i >= index; i--) {
      if (arr[index] < arr[i]) {
         swap(arr[i], arr[index]);
         break;
      }
   }

   reverse(arr.begin() + index + 1, arr.end());

   return arr;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }

   cout << endl;
}

int main() {
   vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

   cout << "Next permutation of your array : ";
   printArray(nextPermutation(arr));

   return 0;
}