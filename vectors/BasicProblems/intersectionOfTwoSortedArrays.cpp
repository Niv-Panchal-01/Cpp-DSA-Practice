#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionOfArrays(const vector<int> &a1, const vector<int> &a2) {
   vector<int> ans;
   vector<int> temp = {0};

   for (int i = 0; i < a1.size(); i++) {
      for (int k = 0; k < a2.size(); k++) {
         if (a1[i] == a2[k] && temp[k] == 0) {
            ans.push_back(a1[i]);
            temp[k] = 1;
            break;
         }

         if (a1[i] < a2[k]) {
            break;
         }
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
   vector<int> arr1 = {1, 2, 2, 3};
   vector<int> arr2 = {1, 1, 1};

   printArray(intersectionOfArrays(arr1, arr2));
   return 0;
}