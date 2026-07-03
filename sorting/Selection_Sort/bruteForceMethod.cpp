#include <iostream>
#include <vector>
using namespace std;

int main() {
   int s;
   cout << "Enter size of the array : ";
   cin >> s;

   vector<int> array(s);

   for (int i = 0; i < s; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   cout << "Before Selection Sort : " << endl;
   for (int val : array) {
      cout << val << ' ';
   }

   // Selection Sort Brute Force Approach
   for (int k = 0; k < s; k++) {
      int smallestNumberIndex = k;
      for (int n = k + 1; n < s; n++) {
         if (array[smallestNumberIndex] > array[n]) {
            smallestNumberIndex = n;
         }
      }
      swap(array[k], array[smallestNumberIndex]);
   }

   cout << endl << "After Selection Sort : ";
   for (int val : array) {
      cout << val << ' ';
   }

   return 0;
}