#include <iostream>
using namespace std;

void printNumbers(int n) {
   if (n < 1) {
      return;
   }

   cout << n << endl;

   printNumbers(n - 1);
}

// backtracking
void printNumbersInBacktracking(int n, int k) {
   if (k > n) {
      return;
   }

   printNumbersInBacktracking(n, k + 1);
   cout << k << endl;
}

int main() {
   int n;
   cout << "Enter a number : ";
   cin >> n;

   printNumbersInBacktracking(n, 1);
   return 0;
}