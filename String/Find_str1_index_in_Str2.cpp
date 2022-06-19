#include<bits/stdc++.h>
using namespace std;

/*
  //Brute Force
  Time Complexity : s*t 
    string s ="he";
    string t = "welcomhe hello";
    int S = s.size();
    int T = t.size();
    for(int i=0 ; i < T - S + 1 ; i++)
    {
        if(t.substr(i ,  S) == s){
            cout<<"Index Found at"<<i<<"\n";
        }
    }
    return 0;
*/
/*
 Brute Prefix function :
 Time Complexity : O(N3) 
 vector<int> prefix_function(string s){
    int n = s.length();
    vector<int> pi(n);
    for(int i = 0 ; i < n ; i++){
        if(s.substr(0 , k) == s.substr(i - k + 1 , k))
          pi[i] = k ;
    }
    return pi
 }
*/

 //Optimise Prefix Function :
 //Time Complexity : O(n)
 vector<int> prefix_function(string s){
    int n = s.size();
    vector<int>pi(n , 0) ;//initilize from zero
    for(int i=1 ; i<n ; i++){
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j])
            j = pi[j-1];
        if(s[i] == s[j])
            j++;
        pi[i] = j;        
    }
    return pi; 
 }

int main(){
    string s = "he";
    vector<int>prefix = prefix_function(s);
    for(auto i : prefix)
        cout<<i<<" ";
    string t = "welcome hello";
    int pos = -1;
    int i=0 , j =0;
    while(i < t.size()){
        if(t[i] == s[j])
        {
            j++;
            i++;
        }
        else
        {
            if(j!=0)
                j = prefix[j - i];
            else
                i++;    
        }
        if(j == s.size())
        {
            pos = i - s.size();
            break;
        }
    }
    cout<<pos;
    return 0;     
 }
