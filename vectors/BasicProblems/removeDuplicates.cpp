#include <iostream>
#include <vector>
using namespace std;

// This solution is specifically for sorted array
// This solution may print duplicates elements after unique elements
int removeDupliactes(vector<int> &arr) {
   int n = arr.size();
   int i = 0, j = 1;

   if (n <= 0) {
      return i;
   }

   while (j < n) {
      if (arr[i] != arr[j]) {
         i++;
         arr[i] = arr[j];
      }
      j++;
   }

   return i + 1;
}

void printArray(const vector<int> &myArray, int k) {
   for (int i = 0; i < k; i++) {
      cout << myArray[i] << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};
   int k = removeDupliactes(arr);
   printArray(arr, k);
   return 0;
}