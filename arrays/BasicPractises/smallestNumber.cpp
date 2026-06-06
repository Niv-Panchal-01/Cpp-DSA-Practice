#include <iostream>
using namespace std;

int main() {
   int array[] = {10, 20, -12, 1, 3, -4, 16};
   int smallestNumber = INT8_MAX;
   int arraySize = sizeof(array) / sizeof(array[0]);

   for (int i = 0; i < arraySize; i++) {
      if (smallestNumber > array[i]) {
         smallestNumber = array[i];
      }
   }
   cout << "Smallest Number is : " << smallestNumber;
   return 0;
}