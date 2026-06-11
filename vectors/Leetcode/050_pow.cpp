#include <iostream>
using namespace std;

double myPow(double x, int n) {
   double answer = 1;
   long binaryForm = n;
   if (n == 0 || x == 1)
      return 1.00;
   if (x == 0)
      return 0.00;
   if (x == -1 & n % 2 == 0)
      return 1.00;
   if (x == -1 & n % 2 != 0)
      return -1.00;

   if (binaryForm < 0) {
      x = 1 / x;
      binaryForm = -binaryForm;
   }
   while (binaryForm > 0) {
      if (binaryForm % 2 == 1) {
         answer *= x;
      }
      x *= x;
      binaryForm /= 2;
   }

   return answer;
}

int main() {
   double x = 5;
   int n = -2;
   cout << x << " raise to " << n << " is : " << myPow(x, n);
   return 0;
}