#include <iostream>
using namespace std;

int printFibonacci(int n) {
   int fibo = 0;
   int previousValue = 0;
   int currentValue = 1;
   if (n == 1) {
      fibo = 1;
   } else {
      for (int i = 1; i < n; i++) {
         fibo = previousValue + currentValue;
         previousValue = currentValue;
         currentValue = fibo;
      }
   }
   return fibo;
}

int main() {
   int n;
   cout << "How much number you want to print for Fibonacci Series : ";
   cin >> n;
   for (int i = 0; i <= n; i++) {
      cout << i << "th Fibonacci number is : " << printFibonacci(i) << endl;
   }
   return 0;
}