#include <iostream>
#include <math.h>
using namespace std;

// int countDigits(int n) {
//    int frequency = 0;
//    while (n > 0) {
//       n /= 10;
//       frequency++;
//    }
//    return frequency;
// }

int countDigits(int n) {
   int count = log10(n) + 1;
   return count;
}

int main() {
   int n;
   cout << "Enter a number to count digits : ";
   cin >> n;
   cout << "Your number has " << countDigits(n) << " Digits.";
   return 0;
}