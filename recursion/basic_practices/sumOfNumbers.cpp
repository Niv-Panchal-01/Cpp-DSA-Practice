#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
   if (n == 0) {
      return 0;
   }

   return n + sumOfNumbers(n - 1);
}

int main() {
   int n;
   cout << "Enter a Number to print sum from 1 : ";
   cin >> n;

   cout << "Your sum is : " << sumOfNumbers(n);
   return 0;
}