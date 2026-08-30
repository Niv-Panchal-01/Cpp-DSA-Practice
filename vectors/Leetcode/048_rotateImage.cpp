#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(n ^ 2)
*/

void rotate(vector<vector<int>> &matrix) {
   int n = matrix.size();
   vector<vector<int>> temp(n, vector<int>(n));
   int indexOfColumn = 0;

   for (int i = 0; i < n; i++) {
      int indexOfRow = n - 1;
      for (int j = 0; j < n; j++) {
         temp[i][j] = matrix[indexOfRow][indexOfColumn];
         indexOfRow--;
      }
      indexOfColumn++;
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         matrix[i][j] = temp[i][j];
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

   // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   vector<vector<int>> matrix = {
       {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};

   cout << "Matrix before 90 Degree ratation : " << endl;
   printMatrix(matrix);

   rotate(matrix);

   cout << "Matrix after 90 Degree ratations : " << endl;
   printMatrix(matrix);

   return 0;
}