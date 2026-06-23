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

int main() {
   int n;
   cout << "Enter number of rows : ";
   cin >> n;

   pyramid(n);
   return 0;
}