// Problem : Find missing number from 1 to N in the array.
#include <iostream>
#include <vector>
using namespace std;

/*
// using sum method
int getMissingNumber(const vector<int> &arr) {
   int n = arr.size() + 1;
   int totalSum = n * (n + 1) / 2;
   int arrSum = 0;

   for (int j = 0; j < n - 1; j++) {
      arrSum += arr[j];
   }

   return totalSum - arrSum;
}
*/

int getMissingNumber(const vector<int> &arr) {
   int n = arr.size() + 1;
   int xor1 = 0;
   int xor2 = 0;

   for (int i = 1; i <= n; i++) {
      xor1 ^= i;
   }
   for (int i = 0; i < n - 1; i++) {
      xor2 ^= arr[i];
   }

   return xor1 ^ xor2;
}

int main() {
   vector<int> arr = {3, 2, 4, 5};

   cout << "Here is the mssing element in the array : "
        << getMissingNumber(arr);
   return 0;
}