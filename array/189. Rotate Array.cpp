class Solution {
public:
    void help_me_to_reverse(vector<int> &nums , int i , int j)
    {
      int l = i , r = j;
      while(l < r){
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;

        l++;
        r--;
      }
    }
    void rotate(vector<int>& nums, int k) {
      k = k%nums.size(); //if k value is more than vector size.
      help_me_to_reverse(nums, 0 , nums.size()-k-1);
      help_me_to_reverse(nums,nums.size()-k , nums.size()-1);
      help_me_to_reverse(nums, 0 , nums.size()-1);
    }
};
////////////////////////OR OR OR ???????????????????????????????????
//use reverse inbuilt function

	void leftRotate(int arr[], int k, int n)
	{
	   k = k%n;

    reverse(arr,arr+k);

    reverse(arr+k,arr+n);

    reverse(arr,arr+n);
	}
		 

};



// } Driver Code Ends
