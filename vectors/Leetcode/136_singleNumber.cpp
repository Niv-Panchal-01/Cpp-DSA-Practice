#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> vec) {
   int n = 0;

   for (int val : vec) {
      n ^= val;
   }

   return n;
}

int main() {
   vector<int> vec = {2, 1, 16, 2, 1};

   cout << singleNumber(vec);
   return 0;
}