#include <iostream>
using namespace std;

int main() {
   int array[] = {1, 2, 3, 10, 11, 14, 9, 16, 3};
   int largestNumber = INT32_MIN;
   int arraySize = sizeof(array) / sizeof(array[0]);

   for (int i = 0; i < arraySize; i++) {
      if (largestNumber < array[i]) {
         largestNumber = array[i];
      }
   }
   cout << "Largest Number is : " << largestNumber;
   return 0;
}