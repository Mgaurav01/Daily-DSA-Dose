//Iterative
// int binarySearch(vector<int> &nums , int target)
// {
//   int l = 0 , r = nums.size()-1;
//
//   while(l <= r)
//   {
//     int mid = l + (r - l)/2;
//     if(nums[mid] == target)
//        return mid;
//     else if(nums[mid] < target)
//        l = mid + 1;
//     else
//       e = mid - 1;
//   }
//   return -1;
// }


//Recursion

// int binarySearch(vector<int>& nums,int target)
// {
//   return helper(nums,target , 0 , nums.size()-1);
// }
//
// int helper(std::vector<int> nums , int x , int min , int max)
// {
//   if(min > max) return -1;
//
//   int mid = min + (max - min) / 2;
//
//   if(nums[mid] == x) return mid;
//
//   if(nums[mid] < x) return helper(nums, x , mid+1,max);
//
//   else return helper(nums, x , min , mid -1);
// }
