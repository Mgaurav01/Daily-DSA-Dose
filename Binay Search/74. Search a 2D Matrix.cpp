class Solution {
public:
  //Log(n*m)
    bool searchMatrix(vector<vector<int>>& m, int target) {
      if(m.size() == 0) return false;

      int n = m.size() , mi = m[0].size();

      int s = 0 , e = (n*mi) -1;
      while(s <= e)
      {
        int mid = s + (e-s)/2;
        int index = m[mid/mi][mid%mi];
        if(index == target)
           return true;
        if(index < target)
             s = mid+1;
        else
           e = mid-1;
      }
      return false;
    }
};
