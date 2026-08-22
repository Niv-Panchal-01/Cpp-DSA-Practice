#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextPermutation(vector<int> &arr){
   next_permutation(arr.begin(), arr.end());

   return arr;
}

void printArray(const vector<int> &arr){
   for(int val : arr){
      cout << val << ' ';
   }

   cout << endl;
}


int main(){
   vector<int> arr = {2,1,5,4,3,0,0};

   cout << "Next permutation of your array : ";
   printArray(nextPermutation(arr));

   return 0;
}