#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
   int size = arr.size();

   for (int n = size - 1; n >= 0; n--) {
      for (int k = size - n; k > 0; k--) {
         if (arr[k] < arr[k - 1]) {
            swap(arr[k], arr[k - 1]);
         }
      }
   }
}

void printArray(vector<int> arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   int n;
   cout << "Enter size of the array : ";
   cin >> n;

   vector<int> array(n);

   for (int i = 0; i < n; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   cout << "Your array before bubble sort : ";
   printArray(array);

   insertionSort(array);

   cout << "Your array after bubble sort : ";
   printArray(array);
   return 0;
}