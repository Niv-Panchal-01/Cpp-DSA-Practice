#include <iostream>
using namespace std;

bool checkPrime(int n) {
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}

int main() {
   int n;
   cout << "Enter a number to check prime or not : ";
   cin >> n;
   if (checkPrime(n)) {
      cout << "Your number is a prime number.";
   } else {
      cout << "Your number is not prime number.";
   }
   return 0;
}