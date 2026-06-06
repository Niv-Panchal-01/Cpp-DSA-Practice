#include <iostream>
using namespace std;

int main() {
   int array[5] = {10, 20, 30, 40, 50};
   int arraySize = sizeof(array) / sizeof(array[0]);
   // total size of array in bytes / size of one elements in bytes = actual size
   // of array.

   for (int i = 0; i < arraySize; i++) {
      cout << array[i] << endl;
   }
   return 0;
}