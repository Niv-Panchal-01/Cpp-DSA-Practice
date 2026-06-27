#include <iostream>
using namespace std;

void printNumbers(int k, int n) {
   if (k > n) {
      return;
   }

   cout << k << endl;
   printNumbers(k + 1, n);
}

// backtracking
void printNumbersInBacktracking(int n) {
   if (n < 1) {
      return;
   }

   printNumbersInBacktracking(n - 1);
   cout << n << endl;
}

int main() {
   int n;
   cout << "Enter a number : ";
   cin >> n;

   printNumbersInBacktracking(n);
   return 0;
}