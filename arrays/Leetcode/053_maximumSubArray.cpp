#include <iostream>
using namespace std;

int main() {
   int array[] = {1, 2, -3, 4, -5, 16};
   int size = sizeof(array) / sizeof(array[0]);
   int maxSum = INT32_MIN;
   int currentSum = 0;
   for (int i = 0; i < size; i++) {
      currentSum += array[i];
      maxSum = max(maxSum, currentSum);
      if (currentSum < 0) {
         currentSum = 0;
      }
   }

   cout << "Max sum is : " << maxSum;

   return 0;
}