#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> vec, int target) {
   int vectorSize = vec.size();
   for (int i = 0; i < vectorSize; i++) {
      if (vec[i] == target) {
         return i;
      }
   }
   return -16; // nagative index means target not found !
}

int main() {
   vector<int> vec = {1, 4, 16, 7, 524, 90, 100};
   int target;
   cout << "Enter your target to get index : ";
   cin >> target;
   cout << "Your target index is : " << linearSearch(vec, target);
   return 0;
}