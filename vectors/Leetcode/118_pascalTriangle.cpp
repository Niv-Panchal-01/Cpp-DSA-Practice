#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(n ^ 2)
*/

vector<vector<int>> generate(const int &numRows) {
   vector<vector<int>> triangle;

   for (int i = 0; i < numRows; i++) {
      vector<int> row;
      for (int j = 0; j <= i; j++) {
         if(i > 1 && j > 0 && j < i){
            int sum = triangle[i - 1][j - 1] + triangle[i - 1][j];
            row.push_back(sum);
         }else{
            row.push_back(1);
         }
         
      }

      triangle.push_back(row);
   }

   return triangle;
}

void printMatrix(const vector<vector<int>> &matrix) {
   for (vector<int> innerArray : matrix) {
      cout << "[ ";

      for (int val : innerArray) {
         cout << val << ' ';
      }

      cout << "]" << endl;
   }
}

int main() {
   printMatrix(generate(8));

   return 0;
}