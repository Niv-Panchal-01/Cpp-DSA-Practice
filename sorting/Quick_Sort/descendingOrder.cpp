#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &arr, int low, int high) {
   if (low >= high) {
      return;
   }

   int pivot = low;
   int i = low + 1, j = high;

   while (i <= j) {
      if (arr[pivot] < arr[j]) {
         if (arr[pivot] > arr[i]) {
            swap(arr[i], arr[j]);
         }
         i++;
      } else {
         j--;
      }
   }
   swap(arr[pivot], arr[j]);
   quickSort(arr, low, j - 1);
   quickSort(arr, j + 1, high);
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

   cout << "Your array before quick sort : ";
   printArray(array);

   quickSort(array, 0, n - 1);

   cout << "Your array after quick sort : ";
   printArray(array);
   return 0;
}