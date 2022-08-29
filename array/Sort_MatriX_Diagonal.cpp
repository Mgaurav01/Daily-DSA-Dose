//Hint :All elements on same diagonal have same i-j result.
//Use  map of key(i-j) & a priority_queue to store data
//Store data in Map
//Assign the value of Map to Matrix & pop() the elements :)
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
      int n = mat.size();
      int m = mat[0].size();

      map<int , priority_queue<int , vector<int> , greater<int>>> mp;

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
      // all elements on same diagonal have same i-j result.
          mp[i-j].push(mat[i][j]);
        }
      }

       for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
           mat[i][j] = mp[i-j].top();
           mp[i-j].pop();
        }
      }
      return mat;
    }
};
