class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string , vector<string>>unmap;
    for(auto s : strs)
    {
        string temp = s;
        sort(temp.begin() , temp.end());
        unmap[temp].push_back(s);
    }
     vector<vector<string>> ans; 
     for(auto it : unmap)
         ans.push_back(it.second);
        
     return ans;   
    }
};