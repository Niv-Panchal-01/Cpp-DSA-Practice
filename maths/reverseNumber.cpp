#include <iostream>
using namespace std;

int reverseNumber(int n) {
   int answer = 0;
   while (n > 0) {
      int lastDigit = n % 10;
      answer = answer * 10 + lastDigit;
      n /= 10;
   }
   return answer;
}

int main() {
   int n;
   cout << "Enter a number to reverse : ";
   cin >> n;
   cout << "Your reversed number is : " << reverseNumber(n);
   return 0;
}