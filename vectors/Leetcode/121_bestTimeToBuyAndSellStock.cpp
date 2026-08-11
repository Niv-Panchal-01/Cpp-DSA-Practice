#include <iostream>
#include <vector>
using namespace std;

int maxProfit(const vector<int> &prices) {
   int n = prices.size();
   int maxProfit = 0;
   for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
         maxProfit = max(maxProfit, prices[i] - prices[j]);
      }
   }

   return maxProfit;
}

int main() {
   vector<int> prices = {8, 4, 2, 4, 1, 8, 9, 17};

   cout << "your max profit is : " << maxProfit(prices);
   return 0;
}