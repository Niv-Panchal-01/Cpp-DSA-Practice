#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
   int n;
   cout << "Enter size of an array : ";
   cin >> n;

   vector<int> array(n);

   for (int i = 0; i < n; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   unordered_map<int, int> mp;
   for (int m = 0; m < n; m++) {
      mp[array[m]]++;
   }

   int k;
   cout << "How many inputs you want to get frequency : ";
   cin >> k;

   while (k--) {
      int number;
      cout << "Enter a number to get frequency of numbers in your array : ";
      cin >> number;

      cout << number << " appeared " << mp[number] << " times in your array."
           << endl;
   }

   return 0;
}