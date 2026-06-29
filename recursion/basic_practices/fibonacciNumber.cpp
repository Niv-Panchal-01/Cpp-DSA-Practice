#include <iostream>
using namespace std;

int fibonacciNumberAt(int n) {
   if (n <= 1) {
      return n;
   }

   int lastNumber = fibonacciNumberAt(n - 1);
   int SecondLastNumber = fibonacciNumberAt(n - 2);

   return lastNumber + SecondLastNumber;
}

int main() {
   int n;
   cout << "Enter a Number to print fibonacci number : ";
   cin >> n;

   cout << n << "th Fibonacci number is : " << fibonacciNumberAt(n);
   return 0;
}