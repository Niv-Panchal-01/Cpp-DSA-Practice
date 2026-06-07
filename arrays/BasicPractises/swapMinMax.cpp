// Here the problem is to Write a function to swap max & min number of an array.
// 10 20 30 40
#include <iostream>
using namespace std;

void swapMinMax(int array[], int size) {
   int min = INT32_MAX;
   int max = INT32_MIN;
   int minIndex = 0;
   int maxIndex = 0;

   for (int i = 0; i < size; i++) {
      if (min > array[i]) {
         min = array[i];
         minIndex = i;
      }
      if (max < array[i]) {
         max = array[i];
         maxIndex = i;
      }
   }

   // Swapping both values
   int val = array[maxIndex];
   array[maxIndex] = array[minIndex];
   array[minIndex] = val;
}

void printArray(int array[], int size) {
   for (int i = 0; i < size; i++) {
      cout << array[i] << ' ';
   }
}

int main() {
   int array[] = {1, 5, 16, 3, 8};
   int size = sizeof(array) / sizeof(array[0]);

   swapMinMax(array, size);

   cout << "Here is your new array : " << endl;

   printArray(array, size);

   return 0;
}