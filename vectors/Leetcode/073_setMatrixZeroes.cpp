#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(1)
*/

void setZeroes(vector<vector<int>> &matrix) {
   int m = matrix.size();
   int n = matrix[0].size();
   bool isFirstColumnHas0 = false;
   bool isFirstRowHas0 = false;

   for (int i = 0; i < m; i++) {
      if (matrix[i][0] == 0) {
         isFirstColumnHas0 = true;
      }
      for (int j = 0; j < n; j++) {
         if (matrix[0][j] == 0 && i == 0) {
            isFirstRowHas0 = true;
         }
         if (matrix[i][j] == 0) {
            if (j != 0 && i != 0) {
               matrix[i][0] = 0;
               matrix[0][j] = 0;
            }
         }
      }
   }

   for (int i = m - 1; i >= 1; i--) {
      for (int j = n - 1; j >= 1; j--) {
         if (matrix[0][j] == 0 || matrix[i][0] == 0) {
            matrix[i][j] = 0;
         }
      }
   }

   if (isFirstColumnHas0) {
      for (int i = 0; i < m; i++) {
         matrix[i][0] = 0;
      }
   }

   if (isFirstRowHas0) {
      for (int j = 0; j < n; j++) {
         matrix[0][j] = 0;
      }
   }
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
   vector<vector<int>> matrix = {{-4, -2147483648, 6, -7, 0},
                                 {-8, 6, -8, -6, 0},
                                 {2147483647, 2, -9, -6, -10}};
   // vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
   // vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

   cout << "Matrix before set zeroes : " << endl;
   printMatrix(matrix);

   setZeroes(matrix);

   cout << "Matrix after set zeroes : " << endl;
   printMatrix(matrix);

   return 0;
}