#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;
/*
    Input:
    n = 13
    Votes[] = {john,johnny,jackie,johnny,john 
    jackie,jamie,jamie,john,johnny,jamie,
    johnny,john}
    Output: john 4
    Explanation:- 
    john has 4 votes casted for 
    him, but so does johny. john is 
    lexicographically smaller, so we print 
    john and the votes he received.
*/
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string , int>umap;
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        
        string name = "";
        int max_vote = 0;
        
        for(auto itr = umap.begin(); itr!=umap.end(); itr++){
            string key = itr->first;
            int val = itr->second;
            
            if(val>max_vote){
                max_vote = val;
                name = key;
            }
            else if(val == max_vote){
                if(key<name)
                    name = key;
            }
        }
        
        vector<string> ans;
        ans.push_back(name);
        string temp = to_string(max_vote);
        ans.push_back(temp);
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{  int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    
    return 0;
}