#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int> &arr) {
   int n = arr.size();
   int firstElement = arr[0];

   for (int i = 0; i < n - 1; i++) {
      arr[i] = arr[i + 1];
   }

   arr[n - 1] = firstElement;
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> myArray = {-1, 0, 3, 6};

   cout << "Your new array is : ";
   leftRotateByOne(myArray);
   printArray(myArray);
   return 0;
}