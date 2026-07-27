// Problem : Find missing number from 1 to N in the array.
#include <iostream>
#include <vector>
using namespace std;

int getMissingNumber(const vector<int> &arr) {
   int n = arr.size() + 1;

   for (int i = 1; i <= n; i++) {
      int flag = 0;
      for (int k = 0; k < n - 1; k++) {
         if (arr[k] == i) {
            flag++;
            break;
         }
      }

      if (flag == 0) {
         return i;
      }
   }
}

int main() {
   vector<int> arr = {1, 2, 3, 5};

   cout << "Here is the mssing element in the array : "
        << getMissingNumber(arr);
   return 0;
}