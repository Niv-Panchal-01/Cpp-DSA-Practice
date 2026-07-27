// Problem : Find missing number from 1 to N in the array.
#include <iostream>
#include <vector>
using namespace std;

int getMissingNumber(const vector<int> &arr) {
   int n = arr.size() + 1;
   int totalSum = n * (n + 1) / 2;
   int arrSum = 0;

   for (int j = 0; j < n - 1; j++) {
      arrSum += arr[j];
   }

   return totalSum - arrSum;
}

int main() {
   vector<int> arr = {8, 2, 4, 5, 3, 7, 1};

   cout << "Here is the mssing element in the array : "
        << getMissingNumber(arr);
   return 0;
}