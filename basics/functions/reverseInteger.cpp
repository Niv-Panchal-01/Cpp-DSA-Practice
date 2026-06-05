#include <iostream>

int reverseInt(int n) {
   int newNum = 0;
   while (n > 0) {
      int lastDigit = n % 10;
      n /= 10;
      newNum = newNum * 10 + lastDigit;
   }
   return newNum;
}

int main() {
   std::cout << reverseInt(75692);
   return 0;
}