/* //need more Practice!!!

class Solution { //TLE
public:
vector<vector<int>> threeSum(vector<int>& nums) {
	    // Brute Force Solution Time O(N^3) & Auxiliary Space O(1)
        int len=nums.size();
        if(len==0 || len<3) // Atleast three elemnets needed for a triplet
            return {};
        set<vector<int>> s; // Set stores unique elements only(duplicate triplets not added)
        sort(nums.begin(),nums.end());
        // Compare all cases of group of three elements for their sum=0 in O(N^3) time
        for(int i=0;i<len-2;i++){
            for(int j=i+1;j<len-1;j++){
                for(int k=j+1;k<len;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        s.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        // Insert all unique triplets in result vector
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};
*/
//Two pointer Approh
/*
    class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin() , nums.end());
    if(n < 3) return {};   
    if(nums[0] > 0) return {};
        
    for(int i=0;i<n;i++)
    {
        if(nums[i] > 0) break;
        
        if(i > 0 && nums[i] == nums[i-1]) continue;
        
        int low = i + 1; 
        int high = n - 1;
        int sum = 0;
        
        while(low < high)
        {
           sum = nums[i] + nums[low] + nums[high];
            
            if(sum > 0) high--;
            
            else if(sum < 0) low++;
            
            else{
                ans.push_back({nums[i] , nums[low] , nums[high]});
                int last_low = nums[low],last_high = nums[high];
                
                while(low < high && nums[low] == last_low) low++;
                
                while(low < high && nums[high] == last_high) high--;
            }
        }
    }
    return ans;    
    }
};
*/