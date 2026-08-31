#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
   vector<int> answer;
   int m = matrix.size();
   int n = matrix[0].size();
   int count = 0;

   int right = 0, bottom = n - 1, left = m - 1, top = 0;

   while (right <= left) {
      for (int i = right; i <= bottom; i++) {
         if (count >= m * n) {
            break;
         }

         int element = matrix[right][i];

         answer.push_back(element);
         count++;
      }

      right++;

      for (int i = right; i <= left; i++) {
         if (count >= m * n) {
            break;
         }
         int element = matrix[i][bottom];

         answer.push_back(element);
         count++;
      }
      bottom--;

      for (int i = bottom; i >= top; i--) {
         if (count >= m * n) {
            break;
         }
         int element = matrix[left][i];
         answer.push_back(element);
         count++;
      }
      left--;

      for (int i = left; i >= right; i--) {
         if (count >= m * n) {
            break;
         }
         int element = matrix[i][top];
         answer.push_back(element);
         count++;
      }
      top++;
   }

   return answer;
}
