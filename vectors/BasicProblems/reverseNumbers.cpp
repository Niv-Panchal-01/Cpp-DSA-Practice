#include <iostream>
#include <vector>
using namespace std;

void reverseNumbers(vector<int> &vec) { // & used to modify main function data
   int n = 0;
   int k = vec.size() - 1;

   while (n < k) {
      int val = vec[n];
      vec[n] = vec[k];
      vec[k] = val;
      n++;
      k--;
   }
}

void printVector(vector<int> vec) {
   for (int val : vec) {
      cout << val << ' ';
   }
}

int main() {
   vector<int> vec = {10, 15, 16, 45, 2};
   reverseNumbers(vec);
   cout << "Here is your reversed vector : ";
   printVector(vec);
   return 0;
}