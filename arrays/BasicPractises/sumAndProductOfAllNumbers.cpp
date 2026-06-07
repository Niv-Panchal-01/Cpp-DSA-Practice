#include <iostream>
using namespace std;

int sumOfAllNumbers(int nums[], int size) {
   int sum = 0;
   for (int i = 0; i < size; i++) {
      sum += nums[i];
   }
   return sum;
}

int productOfAllNumbers(int array[], int size) {
   int product = 1;
   for (int i = 0; i < size; i++) {
      product *= array[i];
   }

   return product;
}

int main() {
   int array[] = {1, 2, 3, 4, 5, 6, 16};
   int arraySize = sizeof(array) / sizeof(array[0]);

   cout << "Sum of all numbers in your array is : "
        << sumOfAllNumbers(array, arraySize) << endl;
   cout << "Product of all numbers in your array is : "
        << productOfAllNumbers(array, arraySize);

   return 0;
}