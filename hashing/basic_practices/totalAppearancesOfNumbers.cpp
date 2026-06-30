#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter size of array : ";
   cin >> n;

   int arr[n];
   for (int i = 0; i < n; i++) {
      int l;
      cout << "Enter " << i << "th element : ";
      cin >> l;
      arr[i] = l;
   }

   int hash[26] = {0};

   for (int k = 0; k < n; k++) {
      hash[arr[k]] += 1;
   }

   int q;
   cout << "Enter number of inputs to get counts : ";
   cin >> q;
   while (q--) {
      int number;
      cout << "Enter number from array to get counts : ";
      cin >> number;

      cout << number << " appeared " << hash[number] << " times." << endl;
   }

   return 0;
}