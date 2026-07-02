/*
Problem Statement: Problem Statement: Given an array of size N. Find the highest
and lowest frequency element.

Example :
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15
is 1 i.e. the lowest.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
   int n;
   cout << "Enter the size of array : ";
   cin >> n;

   vector<int> array(n);

   for (int i = 0; i < n; i++) {
      cout << "Enter " << i << "th element : ";
      cin >> array[i];
   }

   unordered_map<int, int> mp;
   int highestFrequency = 0;
   int highestFrequencyElement = array[0];
   int lowestFrequency = 1;
   int lowestFrequencyElement = array[0];

   for (int i = 0; i < n; i++) {
      mp[array[i]]++;

      if (highestFrequency < mp[array[i]]) {
         highestFrequency = mp[array[i]];
         highestFrequencyElement = array[i];
      }
      if (lowestFrequency > mp[array[i]]) {
         lowestFrequency = mp[array[i]];
         lowestFrequencyElement = array[i];
      }
   }

   cout << "The Highest frequency is : " << highestFrequency
        << " of the element : " << highestFrequencyElement << endl;
   cout << "The Lowest frequency is : " << lowestFrequency
        << " of the element : " << lowestFrequencyElement << endl;

   return 0;
}