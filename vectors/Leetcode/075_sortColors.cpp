#include <iostream>
#include <vector>
using namespace std;

vector<int> sortColors(vector<int> &arr) {
   int n = arr.size();

   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
         }
      }
   }

   return arr;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }

   cout << endl;
}

int main() {
   vector<int> arr = {0, 0, 1, 1, 1};

   cout << "Sorted array : ";
   printArray(sortColors(arr));
   return 0;
}