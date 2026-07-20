#include <iostream>
#include <vector>
using namespace std;

void leftRotationOfArray(vector<int> &arr, int k) {
   int n = arr.size();
   k = k % n;
   vector<int> temp(arr.begin(), arr.begin() + k);

   for (int i = k; i < n; i++) {
      arr[i - k] = arr[i];
   }

   for (int i = n - k; i < n; i++) {
      arr[i] = temp[i - (n - k)];
   }
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
   leftRotationOfArray(myArray, 6);
   printArray(myArray);
   return 0;
}