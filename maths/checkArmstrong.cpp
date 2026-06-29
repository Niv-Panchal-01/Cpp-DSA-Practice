#include <iostream>
#include <math.h>
using namespace std;

bool checkarmstrong(int n) {
   int length = 0;
   int originalNumber = n;
   int sumOfNumbers = 0;
   while (n > 0) {
      length++;
      n /= 10;
   }
   int newNumber = originalNumber;
   while (newNumber > 0) {
      int lastDigit = newNumber % 10;
      sumOfNumbers = sumOfNumbers + round(pow(lastDigit, length));
      newNumber /= 10;
   }

   cout << "Sum of your number is : " << sumOfNumbers << endl;

   if (originalNumber == sumOfNumbers) {
      return true;
   } else {
      return false;
   }
}

int main() {
   int n;
   cout << "Enter a number to check armstrong : ";
   cin >> n;
   if (checkarmstrong(n)) {
      cout << "Your number is armstrong.";
   } else {
      cout << "Your number is not armstrong.";
   }
   return 0;
}