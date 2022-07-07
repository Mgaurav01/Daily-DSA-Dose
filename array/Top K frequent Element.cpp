/*class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int , int> unmap;
    vector<pair<int , int>> high;
    vector<int>ans;
    for(auto it : nums) unmap[it]++;
        
    for(auto it : unmap)
    {
        auto a = make_pair(it.second , it.first);
        high.push_back(a);
    }
    sort(high.begin() , high.end() , greater<pair<int,int>>());
        
    for(int i = 0 ; i < k ; i++)
        ans.push_back(high[i].second);
    
    return ans;    
    }
};
*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >minhp;
    vector<int>v;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    for(auto i : mp)
    {
       minhp.push({i.second,i.first});
       if(minhp.size() > k)
       {
           minhp.pop();
       }
    }
        while(minhp.size() > 0)
        {
            v.push_back(minhp.top().second);
            minhp.pop();
        }
    return v;
    }
};