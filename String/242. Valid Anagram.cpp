/*
Approch :- Using Sorting Function
  class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(t.begin(),t.end());
     sort(s.begin(),s.end());
     if(s == t)
         return true;
        
     return false;   
    }
};

*/

/*
 Approch : Using unorered_map 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
		unordered_map <char, int> umap;
        for (char c:s) umap[c]++;
        for(char c:t) {
            umap[c]--;
            if (umap[c]<0) return false;
        }
        
        return true;
                    
    }
};
*/