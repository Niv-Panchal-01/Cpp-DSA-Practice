#include <iostream>
#include <vector>
using namespace std;

/*
Time complexity : O(n)
Space complexity : O(1)
*/

int maxProfit(const vector<int> &prices) {
   int n = prices.size();
   int maxProfit = 0;
   int minPrice = prices[0];
   for (int i = 1; i < n; i++) {
      minPrice = min(minPrice, prices[i]);
      int profit = prices[i] - minPrice;
      maxProfit = max(maxProfit, profit);
   }

   return maxProfit;
}

int main() {
   vector<int> prices = {8, 4, 2, 4, 1, 8, 9, 17};

   cout << "your max profit is : " << maxProfit(prices);
   return 0;
}