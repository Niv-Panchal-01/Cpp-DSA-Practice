#include <iostream>
using namespace std;

void printName(int n) {
   if (n < 1) {
      return;
   }
   cout << "Hey, I am Niv !" << endl;
   n--;
   printName(n);
}

int main() {
   int n;
   cout << "How many time you want to print your name : ";
   cin >> n;

   printName(n);
   return 0;
}