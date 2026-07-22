#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int> &arr) {
   int n = arr.size();
   int k = 0;

   for (int i = 0; i < n; i++) {
      if (arr[i] != 0) {
         swap(arr[i], arr[k]);
         k++;
      }
   }
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> myArray = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};

   moveZeroesToEnd(myArray);
   cout << "Your new array is : ";
   printArray(myArray);
   return 0;
}