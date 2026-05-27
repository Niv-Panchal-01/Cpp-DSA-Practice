#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter a binary number : ";
   cin >> n;
   int answer = 0;
   int power = 1;

   while (n > 0) {
      int lastDigit = n % 10;
      n /= 10;
      answer += (lastDigit * power);
      power *= 2;
   }

   cout << "Decimal number of " << n << " is : " << answer;
   return 0;
}