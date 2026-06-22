#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter number of rows : ";
   cin >> n;

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