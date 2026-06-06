#include <iostream>
using namespace std;

void reverseArray(int array[], int size) {
   int k = size - 1;
   int n = 0;
   while (n < k) {
      int val = array[k];
      array[k] = array[n];
      array[n] = val;
      n++;
      k--;
   }
}

void printArray(int array[], int size) {
   for (int i = 0; i < size; i++) {
      cout << array[i] << ' ';
   }
}

int main() {
   int array[] = {10, 16, 24, 36, 2, 7, 45, 90};
   int arraySize = sizeof(array) / sizeof(array[0]);

   cout << "Orignal array --->  ";
   printArray(array, arraySize);

   reverseArray(array, arraySize);

   cout << "\nReversed array is --->  ";
   printArray(array, arraySize);

   return 0;
}