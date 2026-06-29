#include <iostream>
using namespace std;

bool checkPalindrom(int n) {
   int reverseNumber = 0;
   int originalNumber = n;

   while (n > 0) {
      int lastDigit = n % 10;
      reverseNumber = reverseNumber * 10 + lastDigit;
      n /= 10;
   }

   cout << "Reversed number is : " << reverseNumber << endl;

   if (originalNumber == reverseNumber) {
      return true;
   } else {
      return false;
   }
}

int main() {
   int n;
   cout << "Enter a number to check palindrome : ";
   cin >> n;
   if (checkPalindrom(n)) {
      cout << "Your number is palindrome.";
   } else {
      cout << "Your number is not palindrome.";
   }
   return 0;
}