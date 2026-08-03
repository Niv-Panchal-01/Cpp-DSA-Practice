#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int> &arr, int target) {
   int n = arr.size();

   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] + arr[j] == target) {
            return {i, j};
         }
      }
   }

   return {0};
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }

   cout << endl;
}

int main() {
   vector<int> arr = {3, 3};

   printArray(twoSum(arr, 6));
   return 0;
}