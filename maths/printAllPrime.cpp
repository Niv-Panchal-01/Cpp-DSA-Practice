#include <iostream>
using namespace std;

bool checkPrime(int n) {
   for (int i = 2; i < n; i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}

void printPrime(int n) {
   for (int i = 2; i <= n; i++) {
      if (checkPrime(i)) {
         cout << i << endl;
      }
   }
}

int main() {
   cout << "Here is the List of the all prime numbers : " << endl;
   printPrime(50);
   return 0;
}