/*
You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings
*/

/*
Input: s = "ilovecodingonleetcode", target = "code"
Output: 2
Explanation:
For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
We can make at most two copies of "code", so we return 2.
*/

/*
int rearrangeCharacters(string s, string target)
{
    map<char,int> mp1,mp2;
        for(auto& ch:target) mp1[ch]++; 
        // mp1 is to store the letter count of target string
        
        for(auto& ch: s) mp2[ch]++; 
         // mp2 is to store the letter count of s string
        
        int res=INT_MAX;
        for(auto x:mp1){
            char ch=x.first;
            int count1=x.second; // count of ch character in target string
            int count2=mp2[ch]; // count of ch character in s string
            res=min(res,count2/count1);
        }
        return res;
}