#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr) {
   int start = 0;
   int end = arr.size() - 1;
   int answer = -1;

   while (start <= end) {
      int mid = start + (end - start) / 2;

      // if (arr[mid - 1] <= arr[mid] && arr[mid] > arr[mid + 1]) {
      //    answer = mid;
      //    break;
      // }

      if (arr[mid] > arr[mid + 1]) {
         end = mid - 1;
      } else {
         start = mid + 1;
         answer = start;
      }
   }
   return answer;
}

int main() {
   vector<int> arr = {1, 2, 4, 5, 16, 7, 2};
   // vector<int> arr = {3, 5, 3, 2, 0};

   cout << "Here is your peak index : " << peakIndexInMountainArray(arr);
   return 0;
}