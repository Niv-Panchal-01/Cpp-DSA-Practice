#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOfTwoArrays(const vector<int> &arr1, const vector<int> &arr2) {
   vector<int> unionArray;
   int sizeOfArr1 = arr1.size(), sizeOfArr2 = arr2.size();
   int i = 0, j = 0;

   while (i < sizeOfArr1 && j < sizeOfArr2) {
      if (arr1[i] <= arr2[j]) {
         if (unionArray.empty()) {
            unionArray.push_back(arr1[i]);
         } else if (arr1[i] != unionArray.back()) {
            unionArray.push_back(arr1[i]);
         }
         i++;
      } else {
         if (unionArray.empty()) {
            unionArray.push_back(arr2[j]);
         } else if (arr2[j] != unionArray.back()) {
            unionArray.push_back(arr2[j]);
         }
         j++;
      }
   }

   while (i < sizeOfArr1) {
      if (unionArray.empty()) {
         unionArray.push_back(arr1[i]);
      } else if (arr1[i] != unionArray.back()) {
         unionArray.push_back(arr1[i]);
      }
      i++;
   }
   while (j < sizeOfArr2) {
      if (unionArray.empty()) {
         unionArray.push_back(arr2[j]);
      } else if (arr2[j] != unionArray.back()) {
         unionArray.push_back(arr2[j]);
      }
      j++;
   }

   return unionArray;
}

void printSet(const vector<int> &s) {
   for (int val : s) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   // vector<int> arr1 = {1, 1, 2, 3, 4, 5};
   // vector<int> arr2 = {2, 2, 3, 4, 4, 5, 6};
   vector<int> arr1 = {};
   vector<int> arr2 = {1, 1, 1};

   printSet(unionOfTwoArrays(arr1, arr2));
   return 0;
}