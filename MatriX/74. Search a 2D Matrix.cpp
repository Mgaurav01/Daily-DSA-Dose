
//Optimize Solution

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
      int n=mat.size() , m=mat[0].size();
      int i=0 , j = m-1;
	    while(i < n and j >= 0)
	    {
	        if(mat[i][j] == x)
	          return 1;

	        if(mat[i][j] > x)  j--;

	        else i++;
	    }
	    return 0;
    }
};

//Approch  2
//Using  BINARY SEARCH
//convertng into linear form & then searching


// The problem statement states that the values of the last col of the ith row is greater than the first col of (i+1)th row. Also, each row is sorted.
// This means that, if we linearly arrange the elements of each row, we will have a sorted array. So we can now perform a binary search over it.
// How will the matrix behave like an array without actually creating an auxiliary array?
// It could be achieved by the following formula :
// A n * m matrix converted into an array: matrix[x][y] : a[x * m + y]
// An array can be converted into n * m matrix: a[x] : matrix[x / m][x % m]

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
      int n = m.size() , mi = m[0].size();
      int s = 0  ,  e = (n*mi)-1;

      while(s <= e)
      {
        int mid = s + (e-s)/2;
        int index = m[mid/mi][mid%mi];

        if(index == target)
           return true;
        if(index < target)
           s = mid + 1;
        else
          e = mid - 1;
      }
      return false;
    }
};
