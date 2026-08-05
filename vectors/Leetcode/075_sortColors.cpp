#include <iostream>
#include <vector>
using namespace std;

vector<int> sortColors(vector<int> &arr) {
   int n = arr.size();
   int low = 0, mid = 0, high = n - 1;

   while (mid <= high) {
      if (arr[mid] == 0) {
         swap(arr[mid], arr[low]);
         low++;
         mid++;
      } else if (arr[mid] == 1) {
         mid++;
      } else {
         swap(arr[mid], arr[high]);
         high--;
      }
   }

   return arr;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }

   cout << endl;
}

int main() {
   vector<int> arr = {0};

   cout << "Sorted array : ";
   printArray(sortColors(arr));
   return 0;
}