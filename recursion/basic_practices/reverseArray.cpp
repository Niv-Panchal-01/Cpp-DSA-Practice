#include <iostream>
using namespace std;

void reverse(int i, int n, int array[]) {
   if (i >= n / 2) {
      return;
   }

   swap(array[i], array[n - i - 1]);

   reverse(i + 1, n, array);
}

int main() {
   int array[] = {1, 2, 3, 4, 5, 16};
   int n = 6;
   int i = 0;

   cout << "Here is your original array : " << endl;
   for (int k = 0; k < n; k++) {
      cout << array[k] << endl;
   }

   cout << "Here is your reversed array : " << endl;
   reverse(i, n, array);
   for (int k = 0; k < n; k++) {
      cout << array[k] << endl;
   }
   return 0;
}
