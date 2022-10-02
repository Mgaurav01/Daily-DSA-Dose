You are given an m x n integer matrix grid.

We define an hourglass as a part of the matrix with the following form:

    A  B  C
       D 
    E  F  G

Return the maximum sum of the elements of an hourglass.

Note that an hourglass cannot be rotated and must be entirely contained within the matrix.

Note : we have to  check all possible hourglass in the matrix & return the maximum

CODE:-

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
     int n = grid.size();
     int m = grid[0].size();
     int res = INT_MIN;
     for(int i=0;i<n-2;i++){
       for(int j=0;j<m-2;j++){
        int  cur_sum = grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1] +  grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
       res = max(res , cur_sum);
       }
     }
      return res;
    }
};
