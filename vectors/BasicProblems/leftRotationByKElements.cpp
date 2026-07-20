#include <iostream>
#include <vector>
using namespace std;

void leftRotationOfArray(vector<int> &arr, int k) {
   int n = arr.size();
   if (k <= 0 || n <= 0) {
      return;
   }

   int temp = arr[0];

   for (int i = 0; i < n - 1; i++) {
      arr[i] = arr[i + 1];
   }

   arr[n - 1] = temp;

   leftRotationOfArray(arr, k - 1);
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> myArray = {1, 2, 3, 4, 5, 6, 7};

   cout << "Your new array is : ";
   leftRotationOfArray(myArray, 2);
   printArray(myArray);
   return 0;
}