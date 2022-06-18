/*
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

/*
I think that the key idea is "Do sorting first, and you only need to compare the first one and the last one."

e.g. "flower", "flow", "flight",
You may need to compare "flower" with not only "flow" but "flight", or you will get a wrong answer "flo".
But after sorting it becomes "flight", "flow", "flower",
and you can ensure that the last string must be one of strings having the "biggest difference" with the first one. So just compare them.
It can reduce lots of time if the number of strings is large.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    sort(strs.begin() , strs.end());
    string a = strs[0];
    string b = strs[n - 1];
    string ans = "";    
    for(int i = 0;i < a.size(); i++){
        if(a[i] == b[i]){
            ans += a[i];
        }
        else{
            break;
        }
    } 
    return ans;    
    }
};