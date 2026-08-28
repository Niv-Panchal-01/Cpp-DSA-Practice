#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(n)
*/

void setZeroes(vector<vector<int>> &matrix) {
   int rowSize = matrix.size();
   vector<int> pointers;

   for (int i = 0; i < rowSize; i++) {
      int columnSize = matrix[i].size();
      bool has0 = false;
      for (int j = 0; j < columnSize; j++) {
         if (matrix[i][j] == 0) {
            has0 = true;
            pointers.push_back(j);
         }
      }

      if (has0) {
         for (int k = 0; k < columnSize; k++) {
            matrix[i][k] = 0;
         }
      }
   }

   for (int i = 0; i < rowSize; i++) {
      for (int val : pointers) {
         matrix[i][val] = 0;
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