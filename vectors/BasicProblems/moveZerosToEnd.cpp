#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int> &arr) {
   int n = arr.size();
   vector<int> temp;

   for (int i = 0; i < n; i++) {
      if (arr[i] != 0) {
         temp.push_back(arr[i]);
      }
   }

   for (int j = 0; j < temp.size(); j++) {
      arr[j] = temp[j];
   }
   for (int k = temp.size(); k < n; k++) {
      arr[k] = 0;
   }
}

void printArray(const vector<int> &arr) {
   for (int val : arr) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> myArray = {1, 0, 2, 3, 2, 0, 0, 4, 5, 0, 0, 0};

   moveZeroesToEnd(myArray);
   cout << "Your new array is : ";
   printArray(myArray);
   return 0;
}