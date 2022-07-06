class Solution { //O(N2)
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>list ;
    //int sum = 0;
    for(int i = 0; i < nums.size()-1; i++)
    {
      for(int j = i + 1 ; j < nums.size() ; j++)
        {   //sum = nums[i] + nums[j]; 
            if( (nums[i] + nums[j]) == target)
            {
                list.push_back(i);
                list.push_back(j);
                //sum = 0;
                break;
                
            }
            else{
                continue;
            }
        }    
    } 
    return list;    
    }
};