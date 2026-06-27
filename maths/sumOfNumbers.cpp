#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
   int answer = n * (n + 1) / 2;

   return answer;
}

int main() {
   int n;
   cout << "Enter a Number to print sum from 1 : ";
   cin >> n;

   cout << "Your sum is : " << sumOfNumbers(n);
   return 0;
}