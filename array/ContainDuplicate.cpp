class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       // Brute Force Method   -> O(n^2)
        int n =nums.size();
       for(int i=0;i<n-1;i++)
       {
            for(int j=i+1;j<n;j++)
            {
               if(nums[i]==nums[j])return true
            }
        }
        return false;
        
        //Using Sort Function    -> O(nlogn)
       
      sort(nums.begin() , nums.end())
      for(int i=0;i<n;i++)
       if(nums[i]==nums[i+1])return true;
         return false;
        
        //Using Map      -> O(n)
     unordered_map<int,int> m;
     for(auto a: nums) m[a]++;
        for(auto a: m)
            if(a.second>1)return 1;
        return 0;
        
        //Using Sets     -> O(n)
        unordered_set<int> s;
        for(auto a:nums)s.insert(a);
        if(nums.size()==s.size())return false;
        return true;
       
        
        
    }
};
/*
class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> unmap;
    for(int i = 0 ; i < s.size() ; i++)
        unmap[s[i]]++;
        
    for(int i = 0 ; i < t.size() ; i++)
    {
        char key = t[i];
        if(unmap.find(key) == unmap.end())
            return false;
        if(unmap.at(key) == 1) unmap.erase(key);
        else{
            unmap[key]--;
        }
        
    }
    return unmap.size() == 0;    
    }
};
*/