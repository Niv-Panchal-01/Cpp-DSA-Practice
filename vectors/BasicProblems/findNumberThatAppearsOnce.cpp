/*
Find the number that appears once, and the other numbers twice
Problem Statement: Given a non-empty array of integers arr, every element
appears twice except for one. Find that single one.
*/

#include <iostream>
#include <vector>
using namespace std;

int getNumberThatAppearsOnce(const vector<int> &arr) {
   int n = arr.size();
   int XOR = arr[0];

   for (int i = 1; i < n; i++) {
      XOR ^= arr[i];
   }

   return XOR;
}

int main() {
   vector<int> arr = {2, 2, 1, 1, 10, 11, 524, 10, 11, 5,
                      6, 7, 7, 6, 5,  8,  9,   8,  9};

   cout << "Here is the number that appears once in your array : "
        << getNumberThatAppearsOnce(arr);
   return 0;
}