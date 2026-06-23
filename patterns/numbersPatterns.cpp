#include <iostream>
using namespace std;

void binaryTriangle(int n) {
   int val = 0;
   for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
         val = 1;
      } else {
         val = 0;
      }
      for (int k = 0; k <= i; k++) {
         if (val == 1) {
            cout << val << ' ';
            val--;
         } else {
            cout << val << ' ';
            val++;
         }
      }
      cout << endl;
   }
}

void numbersCrown(int n) {
   for (int i = 1; i <= n; i++) {
      for (int k = 1; k <= n; k++) {
         if (k <= i) {
            cout << k << ' ';
         } else {
            cout << ' ' << ' ';
         }
      }
      for (int m = n; m > 0; m--) {
         if (i + 1 > m) {
            cout << m << ' ';
         } else {
            cout << ' ' << ' ';
         }
      }
      cout << endl;
   }
}

void floyedsTriangle(int n) {
   int number = 1;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k <= i; k++) {
         cout << number << ' ';
         number++;
      }
      cout << endl;
   }
}

int main() {
   int n;
   cout << "Enter number of rows : ";
   cin >> n;

   return 0;
}