class Solution {
public:
  //0(N)
    int singleNonDuplicate(vector<int>& nums) {
      //   int res = 0;
      //   for(int i=0;i<nums.size();i++)
      //   {
      //     res = res ^ nums[i]; //xor operator give '0' => 1^1
      //   }
      // return res;
      int low = 0 , high = nums.size()-2;
      while(low <= high)
      {
        int mid = low + (high - low) / 2;

        if(mid % 2 == 0)
        {
          if(nums[mid] == nums[mid+1])
            low = mid+1;
          else
            high = mid-1;
        }
        else
        {
          if(nums[mid] == nums[mid+1])
          {
            high = mid-1;
          }
          else
            low = mid+1;
        }
      }
      return nums[low];
    }
};
