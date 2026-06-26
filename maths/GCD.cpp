#include <iostream>
#include <math.h>
using namespace std;

int GCD(int n, int k) {
   int largestNumber;

   // for (int i = min(n, k); i > 0; i--) {
   //    if (n % i == 0 && k % i == 0) {
   //       largestNumber = i;
   //       break;
   //    }
   // }

   // Equilateral Algorithm
   while (n > 0 || k > 0) {
      if (n == 0) {
         largestNumber = k;
         break;
      } else if (k == 0) {
         largestNumber = n;
      } else if (n > k) {
         n %= k;
      } else {
         k -= n;
      }
   }

   return largestNumber;
}

int main() {
   int n;
   cout << "Enter first number : ";
   cin >> n;
   int k;
   cout << "Enter second number : ";
   cin >> k;

   cout << "Your gratest common divisor for " << n << " and " << k
        << " is : " << GCD(n, k);
   return 0;
}