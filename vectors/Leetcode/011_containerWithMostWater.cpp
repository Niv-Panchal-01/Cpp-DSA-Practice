#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height) {
   int maxWater = 0;
   int n = height.size();
   int k = n - 1;
   int i = 0;
   while (i < k) {
      int width = k - i;
      maxWater = max(maxWater, width * (min(height[i], height[k])));
      if (height[i] < height[k]) {
         i++;
      } else {
         k--;
      }
   }
   return maxWater;
}

int main() {
   vector<int> height = {8, 7, 2, 1};
   cout << "Here is your max water : " << maxArea(height);
   return 0;
}