#include <iostream>
#include <vector>
using namespace std;

int countMaxConsecutive1(const vector<int> &arr) {
   int n = arr.size();
   int maxCount = 0;
   int currentCount = 0;

   for (int i = 0; i < n; i++) {

      if (arr[i] == 1) {
         currentCount++;
      } else {
         maxCount = max(currentCount, maxCount);
         currentCount = 0;
      }
   }

   maxCount = max(currentCount, maxCount);

   return maxCount;
}

int main() {
   vector<int> arr = {1, 1, 0, 1, 1, 1};

   cout << "maximum count if consecutive 1's : " << countMaxConsecutive1(arr);
   return 0;
}