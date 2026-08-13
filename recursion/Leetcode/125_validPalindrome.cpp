#include <iostream>
#include <string>
using namespace std;

bool reverseString(string &name, int n, int i = 0) {
   if (i >= n / 2) {
      return true;
   }

   if (name[i] != name[n - i - 1]) {
      return false;
   }

   return reverseString(name, n, i + 1);
}

int main() {
   string name;
   cout << "Enter a name : ";
   cin >> name;
   int n = name.size();

   if (reverseString(name, n)) {
      cout << "Name is Palindrome.";
   } else {
      cout << "Name is not Palindrome.";
   }

   return 0;
}