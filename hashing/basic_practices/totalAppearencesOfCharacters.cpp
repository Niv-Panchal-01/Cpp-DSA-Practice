#include <iostream>
using namespace std;

// This main function is only valid for uppercase alphabet
// int main() {
//    cout << "NOTE: THIS IS ONLY FOR LOWERCASE ALPHABETS !!" << endl << endl;
//    int n;
//    cout << "Enter size for an array : ";
//    cin >> n;

//    char array[n];

//    for (int i = 0; i < n; i++) {
//       char l;
//       cout << "Enter " << i << "th element : ";
//       cin >> l;
//       array[i] = l;
//    }

//    int hash[26] = {0};

//    for (int k = 0; k < n; k++) {
//       hash[array[k] - 97] += 1;
//    }

//    int q;
//    cout << "Enter number of inputs to get counts : ";
//    cin >> q;

//    while (q--) {
//       char ch;
//       cout << "Enter a lowercase alphabet from your array : ";
//       cin >> ch;

//       cout << "Appearence of " << ch << " is : " << hash[ch - 97] << endl;
//    }

//    return 0;
// }

// This is main function is for uppercase alphabets
int main() {
   cout << "NOTE: THIS IS ONLY FOR UPPERCASE ALPHABETS !!" << endl << endl;
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
      hash[array[k] - 65] += 1;
   }

   int q;
   cout << "Enter number of inputs to get counts : ";
   cin >> q;

   while (q--) {
      char ch;
      cout << "Enter a uppercase alphabet from your array : ";
      cin >> ch;

      cout << "Appearence of " << ch << " is : " << hash[ch - 65] << endl;
   }

   return 0;
}
