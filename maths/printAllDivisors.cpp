#include <iostream>
using namespace std;

// void printAllDivisors(int n) {
//    cout << "[";
//    for (int i = 1; i <= n; i++) {
//       if (n % i == 0) {
//          cout << i;
//          if (i != n) {
//             cout << ", ";
//          }
//       }
//    }
//    cout << ']';
// }

// optimal approach
void printAllDivisors(int n) {
   for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
         cout << i << ' ';
         if (n / i != i) {
            cout << (n / i) << ' ';
         }
      }
   }
}

int main() {
   int n;
   cout << "Enter number to get all divisor : ";
   cin >> n;
   cout << "Here is your all divisors of " << n << " : ";
   printAllDivisors(n);
}