#include <iostream>
using namespace std;

void printArrayIntersection(int array1[], int size1, int array2[], int size2) {
   int newArray[size1 + size2];
   int n = 0;
   for (int i = 0; i < size1; i++) {
      bool isSame = false;
      for (int k = 0; k < size2; k++) {
         if (array1[i] == array2[k]) {
            isSame = true;
            break;
         }
      }
      if (isSame) {
         newArray[n] = array1[i];
         n++;
      }
   }

   for (int i = 0; i < n; i++) {
      cout << newArray[i] << ' ';
   }
}

int main() {
   int array1[] = {1, 16, 34, 524, 2, 24};
   int array2[] = {16, 45, 24, 8, 524};
   int size1 = sizeof(array1) / sizeof(array1[0]);
   int size2 = sizeof(array2) / sizeof(array2[0]);

   printArrayIntersection(array1, size1, array2, size2);
   return 0;
}