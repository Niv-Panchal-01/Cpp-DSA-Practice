#include <iostream>
using namespace std;

int factorial(int k) {
   int facto = 1;
   for (int i = 2; i <= k; i++) {
      facto *= i;
   }
   return facto;
}
int bionomicalCoffecient(int n, int r) {
   int dividend = factorial(n);
   int divisor = factorial(r) * factorial(n - r);

   return dividend / divisor;
}

int main() {
   cout << "bionomicalCoffecient is : " << bionomicalCoffecient(8, 2);
   return 0;
}