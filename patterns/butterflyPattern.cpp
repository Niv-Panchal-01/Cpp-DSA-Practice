#include <iostream>
using namespace std;
int main() {
   int k;
   cout << "Enter the number of rows : ";
   cin >> k;
   for (int i = 0; i < k; i++) {
      for (int j = 0; j <= i; j++) {
         cout << '*' << ' ';
      }
      for (int n = 0; n < (k + (k - 2) - (i * 2)); n++) {
         cout << "  ";
      }
      for (int m = 0; m <= i; m++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }

   for (int i = 0; i < k; i++) {
      for (int j = 0; j < (k - i); j++) {
         cout << '*' << ' ';
      }
      for (int n = 0; n < ((k - (k - 2)) * i); n++) {
         cout << "  ";
      }
      for (int m = 0; m < (k - i); m++) {
         cout << '*' << ' ';
      }
      cout << endl;
   }

   return 0;
}