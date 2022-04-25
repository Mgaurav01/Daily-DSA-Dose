#include<bits/stdc++.h>
using namespace std;
void nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        
        stack<int>st;
        
         for(int i=nums2.size()-1 ;i>=0;i--)
         {
              if(st.size()==0)
              {
                 mp[nums2[i]]=-1;
              }
             else if( st.top()>nums2[i] )
                 {
                  mp[nums2[i]]=st.top();
                   
                 }
             else {
                     
                     while( st.size()>0  && st.top()<=nums2[i])
                     {
                         st.pop();
                         
                     }
                 
                     if( st.size()==0)
                     {
                          mp[nums2[i]]=-1;
                           
                     }
                     else{
                           mp[nums2[i]]=st.top();
                         
                     }
                     
                 }
               st.push(nums2[i]);
         }
        vector<int>ans;
          for(auto elem : nums1)
          {
             ans.push_back(mp[elem]);
          }
         for(int i=0;i<ans.size();i++)
            cout<<ans[i];
                 
    }
 int main()
 {
     vector<int>num1 = {4,1,2};
     vector<int>num2 = {1,3,4,2};
     nextGreaterElement( num1 , num2);
     return 0;
 }   