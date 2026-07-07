#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &arr, int low, int mid, int high) {
   int left = low;
   int right = mid + 1;
   vector<int> temp;

   while (left <= mid && right <= high) {
      if (arr[left] <= arr[right]) {
         temp.push_back(arr[left]);
         left++;
      } else {
         temp.push_back(arr[right]);
         right++;
      }
   }

   while (left <= mid) {
      temp.push_back(arr[left]);
      left++;
   }
   while (right <= high) {
      temp.push_back(arr[right]);
      right++;
   }

   for (int i = low; i <= high; i++) {
      arr[i] = temp[i - low];
   }
}

void mergeSort(vector<int> &arr, int low, int high) {
   if (low >= high) {
      return;
   }
   int mid = (low + high) / 2;

   mergeSort(arr, low, mid);
   mergeSort(arr, mid + 1, high);
   mergeArray(arr, low, mid, high);
}

void printArray(vector<int> arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   int n;
   cout << "Enter a size to input array : ";
   cin >> n;

   vector<int> array(n);

   for (int i = 0; i < n; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   cout << "Your array before merge sort : ";
   printArray(array);

   mergeSort(array, 0, n - 1);

   cout << "Your array after merge sort : ";
   printArray(array);
   return 0;
}