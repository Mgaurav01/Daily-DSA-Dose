class Solution {
public:
    int search(vector<int>& nums, int target) {
     int s = 0 , e = nums.size();
     return helper(nums,target,s,e);
    }
    int helper(vector<int>nums,int target ,int s ,int e)
    {
      int mid = s + (e-s)/2;
      if(s > e) return -1;

      if(nums[mid] == target) return mid;

      else if(nums[mid] > target) return helper(nums,target,s ,e=mid-1);

      else return helper(nums,target,s=mid,e);
    }
};
