/* Problem : Check given array is sorted or not

Example :
input : arr[] = {1,2,3,5};
output : true;

input : arr[] = {5,5,5};
output : true;

input : arr[] = {2,4,5,1};
output : false;
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int> &arr) {
   int n = arr.size();
   for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
         return false;
      }
   }

   return true;
}

int main() {
   int n;
   cout << "Enter size of your array : ";
   cin >> n;

   vector<int> arr(n);

   for (int i = 0; i < n; i++) {
      cout << "Enter " << i << "th index of the array : ";
      cin >> arr[i];
   }

   if (isSorted(arr)) {
      cout << "true";
   } else {
      cout << "false";
   }
   return 0;
}