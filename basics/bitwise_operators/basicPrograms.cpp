#include <iostream>
using namespace std;

int main() {
   int a = 6;
   int b = 10;
   cout << "6 & 10 = " << (a & b) << endl;
   cout << "6 | 10 = " << (a | b) << endl;
   cout << "6 ^ 10 = " << (a ^ b) << endl;
   cout << "10 << 2 = " << (b << 2) << endl;
   cout << "10 >> 1 = " << (b >> 1) << endl;

   return 0;
}
