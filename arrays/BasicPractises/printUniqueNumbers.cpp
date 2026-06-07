#include <iostream>
using namespace std;

void printUniqueNumbers(int array[], int size) {
   int newArray[size];
   int n = 0;

   for (int i = 0; i < size; i++) {
      bool isSame = false;
      for (int k = 0; k < size; k++) {
         if (i == k) {
            continue;
         }
         if (array[i] == array[k]) {
            isSame = true;
            break;
         }
      }
      if (!isSame) {
         newArray[n] = array[i];
         n++;
      }
   }

   for (int i = 0; i < n; i++) {
      cout << newArray[i] << ' ';
   }
}

int main() {
   int array[] = {1, 524, 1, 4, 4, 16};
   int size = sizeof(array) / sizeof(array[0]);

   printUniqueNumbers(array, size);
   return 0;
}