
	void pushZerosToEnd(int arr[], int n) {
	   int i=0 , it = 0;
	   while(i < n){
	       if(arr[i] != 0)
	       {
	           arr[it] = arr[i];
	           it++;
	       }
	       i++;
	   }
	   while(it < n)
	   {
	       arr[it] = 0;
	       it++;
	   }
	}
///////////////////////////LEETCODE///////////////////////
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int size = nums.size();

        int a=0;

        for(int i=0; i<size; i++) {
            if(nums[i]!=0) {
                swap(nums[i], nums[a]);
                a++;
            }
        }
    }
};
