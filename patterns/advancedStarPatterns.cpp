#include <iostream>
using namespace std;

void symmetricStarPattern(int n) {
   int space = 0;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k < n - i; k++) {
         cout << '*' << ' ';
      }
      for (int s = 0; s < space; s++) {
         cout << ' ' << ' ';
      }
      space += 2;
      for (int j = 0; j < n - i; j++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
   space = (n - 1) * 2;
   for (int p = 0; p < n; p++) {
      for (int q = 0; q <= p; q++) {
         cout << '*' << ' ';
      }
      for (int s = 0; s < space; s++) {
         cout << ' ' << ' ';
      }
      space -= 2;
      for (int r = 0; r <= p; r++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
}

void butterflyPattern(int n) {
   int space = (n - 1) * 2;
   int stars = 0;
   for (int i = 1; i <= n * 2 - 1; i++) {
      if (i > n) {
         stars = n * 2 - i;
      } else {
         stars++;
      }
      for (int k = 0; k < stars; k++) {
         cout << '*' << ' ';
      }
      for (int s = 0; s < space; s++) {
         cout << ' ' << ' ';
      }
      if (i >= n) {
         space += 2;
      } else {
         space -= 2;
      }
      for (int m = 0; m < stars; m++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }
}

void squarePattern(int n) {
   for (int i = 0; i < n; i++) {
      for (int k = 0; k < n; k++) {
         if (i == 0 || i == n - 1) {
            cout << '*' << ' ';
            continue;
         }
         if (k == 0 || k == n - 1) {
            cout << '*' << ' ';
         } else {
            cout << ' ' << ' ';
         }
      }
      cout << endl;
   }
}

int main() {
   int n;
   cout << "Enter number of rows : ";
   cin >> n;

   squarePattern(n);
   return 0;
}