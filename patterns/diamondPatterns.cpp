#include <iostream>
using namespace std;

void pyramid(int n) {
   for (int i = 0; i < n; i++) {
      for (int k = 1; k <= n; k++) {
         if (n - i <= k) {
            cout << '*' << ' ';
         } else {
            cout << ' ' << ' ';
         }
      }
      for (int j = 0; j < i; j++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
}

void reversePyramid(int n) {
   for (int i = 0; i < n; i++) {
      for (int k = n; k > 0; k--) {
         if (n - i < k) {
            cout << ' ' << ' ';
         } else {
            cout << '*' << ' ';
         }
      }
      for (int j = n - i - 1; j > 0; j--) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
}

void diamondPattern(int n) {
   pyramid(n);
   reversePyramid(n);
}

void rightHalfDiamondPattern(int n) {
   for (int i = 0; i < n; i++) {
      for (int k = 0; k <= i; k++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
   for (int l = 0; l < n; l++) {
      for (int m = n - l; m > 1; m--) {
         cout << '*' << ' ';
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