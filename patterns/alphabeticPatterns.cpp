#include <iostream>
using namespace std;

void simpleAlphabetTriangle(int n) {
   for (int i = 0; i < n; i++) {
      char ch = 65;
      for (int k = 0; k <= i; k++) {
         cout << ch << ' ';
         ch++;
      }
      cout << endl;
   }
}
void reverseAlphabetTriangle(int n) {
   for (int i = 0; i < n; i++) {
      char ch = 65;
      for (int k = n - i; k > 0; k--) {
         cout << ch << ' ';
         ch++;
      }
      cout << endl;
   }
}
void continuousAlphabetTriangle(int n) {
   char ch = 65;
   for (int i = 0; i < n; i++) {
      for (int k = 0; k <= i; k++) {
         cout << ch << ' ';
      }
      ch++;
      cout << endl;
   }
}

void alphabetPyramid(int n) {
   for (int i = 0; i < n; i++) {
      char ch = 'A';
      for (int k = 1; k <= n; k++) {
         if (n - i <= k) {
            cout << ch << ' ';
            ch++;
         } else {
            cout << ' ' << ' ';
         }
      }
      ch -= 2;
      for (int j = 0; j < i; j++) {
         cout << ch << ' ';
         ch--;
      }
      cout << endl;
   }
}

void alphabeticAdvancedTriangle(int n) {
   for (int i = n; i > 0; i--) {
      char ch = 65 + i - 1;
      for (int k = n; k >= i; k--) {
         cout << ch << ' ';
         ch++;
      }
      cout << endl;
   }
}

int main() {
   int n;
   cout << "Enter number of rows : ";
   cin >> n;
   alphabetPyramid(n);
   return 0;
}