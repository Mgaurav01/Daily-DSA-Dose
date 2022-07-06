class Solution { // O(N log N)
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());
        
    if(s == t) return true;
    //return s == t ;    
    return false;    
    }
};
//Optimize Approch
//O(N)
class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char , int> umap;
    for(int i=0 ; i < s.size() ; i++) umap[s[i]]++;
    for(int i=0 ; i < t.size() ; i++) umap[t[i]]--;
    
    for(auto it : umap) 
    {if(it.second != 0) return false;
        
    }
    return true;    
    }
};