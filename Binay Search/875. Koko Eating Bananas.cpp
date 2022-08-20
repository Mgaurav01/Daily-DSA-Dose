class Solution {
public:
    int helper(vector<int>& piles , int k , int h)
    {   long long int hour = 0;
        for(int pile : piles)
        {
          long long int div = pile / k;
          hour += div;
          if(pile % k != 0) hour++;
        }
     return hour <= h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
      int left = 1, right = 1000000000;
      while(left <= right)
      {
        int mid = left + (right-left)/2;
        if(helper(piles , mid ,h)) right = mid - 1;
        else left = mid + 1;
      }
      return left;
    }
};
