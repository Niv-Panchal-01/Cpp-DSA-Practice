#include <iostream>
#include <vector>
using namespace std;

void secondLargest(vector<int> arr) {
   int n = arr.size();
   int largestNumber = arr[0];
   int secondLargest = INT32_MIN;
   bool newValue = false;

   for (int i = 1; i < n; i++) {
      if (largestNumber < arr[i]) {
         secondLargest = largestNumber;
         largestNumber = arr[i];
         newValue = true;
      } else if (arr[i] != largestNumber && secondLargest < arr[i]) {
         secondLargest = arr[i];
         newValue = true;
      }
   }

   if (newValue) {
      cout << secondLargest;
   } else {
      cout << "There is no second largest element present.";
   }
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

   cout << "Your second largest element in the array is : ";
   secondLargest(arr);
   return 0;
}