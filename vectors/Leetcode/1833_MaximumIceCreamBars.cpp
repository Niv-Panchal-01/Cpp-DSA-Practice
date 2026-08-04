#include <iostream>
#include <vector>
using namespace std;

int maxIceCream(vector<int> &costs, int coins) {
   int sum = 0;
   int bars = 0;

   for (int i = 0; i < costs.size(); i++) {
      sum += costs[i];

      if (sum <= coins) {
         bars++;
      } else {
         sum -= costs[i];
      }
   }

   return bars;
}

int main() {
   vector<int> costs = {1, 2, 3, 9, 10, 5};
   int coins = 16;

   cout << "You can have " << maxIceCream(costs, coins) << " Ice Cream Bars";
   return 0;
}