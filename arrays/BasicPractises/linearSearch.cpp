#include <iostream>
using namespace std;

int linearSearch(int array[], int sizeOfArray, int target) {
   for (int i = 0; i < sizeOfArray; i++) {
      if (array[i] == target) {
         return i;
      }
   }
   return -1;
}

int main() {
   int array[] = {1, 2, 3, 16, 34, 2, 66};
   int arraySize = sizeof(array) / sizeof(array[0]);
   int target;
   cout << "Enter the target : ";
   cin >> target;
   cout << "Index of your target is : "
        << linearSearch(array, arraySize, target);

   return 0;
}