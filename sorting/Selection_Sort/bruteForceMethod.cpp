#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> array) {
   int s = array.size();
   for (int k = 0; k < s; k++) {
      int smallestNumberIndex = k;
      for (int n = k + 1; n < s; n++) {
         if (array[smallestNumberIndex] > array[n]) {
            smallestNumberIndex = n;
         }
      }
      swap(array[k], array[smallestNumberIndex]);
   }
}

void printArray(vector<int> array) {
   for (int val : array) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   int s;
   cout << "Enter size of the array : ";
   cin >> s;

   vector<int> array(s);

   for (int i = 0; i < s; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   cout << "Before Selection Sort : ";
   printArray(array);

   cout << endl << "After Selection Sort : ";
   printArray(array);

   return 0;
}