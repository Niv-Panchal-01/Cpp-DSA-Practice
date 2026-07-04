#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}
// example array --> 5 4 3 2 1
void bubbleSort(vector<int> &arr) {
   int size = arr.size();
   bool isSorted = true;
   for (int k = 0; k < size - 1; k++) {
      for (int n = 0; n < size - k - 1; n++) {
         if (arr[n] > arr[n + 1]) {
            swap(arr[n], arr[n + 1]);
            isSorted = false;
         }
      }
      if (isSorted) {
         break;
      }
   }
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

   bubbleSort(array);

   cout << "Your array after bubble sort : ";
   printArray(array);
   return 0;
}