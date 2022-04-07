//{GFG}{https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/?page=1&category[]=Recursion&sortBy=submissions#}
//{leetcode ,Q46}{https://leetcode.com/problems/permutations/}
#include<bits/stdc++.h>
using namespace std;

class Solution
{   private:
    void solve(string s , vector<string> &ans , int index)
    {
        if(index>=s.size()) {
            ans.push_back(s);
            return;
        }
        for(int j=index ; j<s.size() ; j++)
        {
            swap(s[index],s[j]);
            solve(s,ans,index+1);
            swap(s[index],s[j]);
            
        }
        
    }
    
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> ans;
		    int index = 0;
		    solve(s , ans ,index);
		    
	      
	sort(ans.begin() , ans.end());	
	return ans;	    
		}
};




int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

