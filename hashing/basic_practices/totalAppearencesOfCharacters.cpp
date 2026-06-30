#include <iostream>
using namespace std;

int main() {
   cout << "NOTE: THIS IS ONLY FOR LOWERCASE ALPHABETS !!" << endl << endl;
   int n;
   cout << "Enter size for an array : ";
   cin >> n;

   char array[n];

   for (int i = 0; i < n; i++) {
      char l;
      cout << "Enter " << i << "th element : ";
      cin >> l;
      array[i] = l;
   }

   int hash[26] = {0};

   for (int k = 0; k < n; k++) {
      hash[array[k] - 97] += 1;
   }

   int q;
   cout << "Enter number of inputs to get counts : ";
   cin >> q;

   while (q--) {
      char ch;
      cout << "Enter a lowercase alphabet from your array : ";
      cin >> ch;

      cout << "Appearence of " << ch << " is : " << hash[ch - 97] << endl;
   }

   return 0;
}