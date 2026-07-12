#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> removeDupliactes(vector<int> &arr) {
   int n = arr.size();
   unordered_set<int> newSet;
   for (int i = 0; i < n; i++) {
      newSet.insert(arr[i]);
   }

   int index = 0;
   for (int val : newSet) {
      arr[index] = val;
      index++;
   }
   return arr;
}

void printSet(const vector<int> &myArray) {
   for (int val : myArray) {
      cout << val << ' ';
   }
   cout << endl;
}

int main() {
   vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};

   printSet(removeDupliactes(arr));
   return 0;
}