#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
   int bestBuy = prices[0];
   int maxProfit = 0;
   for (int i = 0; i < prices.size(); i++) {
      bestBuy = min(bestBuy, prices[i]);
      int currentProfit = prices[i] - bestBuy;
      maxProfit = max(maxProfit, currentProfit);
   }
   return maxProfit;
}

int main() {
   vector<int> prices = {8, 4, 2, 4, 1, 8, 9, 17};

   cout << "your max profit is : " << maxProfit(prices);
   return 0;
}