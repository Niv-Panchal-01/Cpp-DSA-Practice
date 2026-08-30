#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Time Complexity : O(n ^ 2)
Space Complexity : O(1)
*/

void rotate(vector<vector<int>> &matrix) {
   int n = matrix.size();

   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if(i != j){
            swap(matrix[i][j], matrix[j][i]);
         }
      }
   }

   for (int i = 0; i < n; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
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

   vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   // vector<vector<int>> matrix = {
      //  {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};

   cout << "Matrix before 90 Degree ratation : " << endl;
   printMatrix(matrix);

   rotate(matrix);

   cout << "Matrix after 90 Degree ratations : " << endl;
   printMatrix(matrix);

   return 0;
}