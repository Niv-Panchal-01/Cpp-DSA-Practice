#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionOfArrays(const vector<int> &a1, const vector<int> &a2) {
   vector<int> ans;
   int i = 0, j = 0;
   int n1 = a1.size(), n2 = a2.size();

   while (i < n1 && j < n2) {
      if (a1[i] < a2[j]) {
         i++;
      } else if (a1[i] > a2[j]) {
         j++;
      } else {
         ans.push_back(a1[i]);
         i++;
         j++;
      }
   }

   return ans;
}

void printArray(const vector<int> &s) {
   for (int val : s) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   // vector<int> arr1 = {1, 1, 2, 3, 4, 5};
   // vector<int> arr2 = {2, 2, 3, 4, 4, 5, 6};
   vector<int> arr1 = {2, 5};
   vector<int> arr2 = {3, 5};

   printArray(intersectionOfArrays(arr1, arr2));
   return 0;
}