#include<bits/stdc++.h>
using namespace std;
/*
Brute Force 
Time complexity :- O(nmlog(n)) // m for comparision , nlogn for sorting
int main(){
 vector<string>s = {"aa" , "ab" , "ba" , "aa" , "cd"};
 sort(s.begin() , s.end());
 int distinct = 0;
 for(int i=0;i<s.size();i++){
    if(i==0 || s[i] != s[i - 1]){
        cout<<s[i]<<"\n";
        distinct++;
    }
} 
cout<<distinct<<"\n";
return 0;   
}
*/

//Optimal Solution
//Using Hash Table
//Time complexity : O(nm)  & O(n log n) => O(nm + nlog(n));
int p = 31;
const int N = 1e5 + 3 , m = 1e9 + 7;
vector<long long> power(N);
long long calculate_hash(string s){
    long long hash = 0;
    for(int i=0 ; i < s.size() ; i++){
        hash = (s[i] - 'a' + 1) * power[i];
    }
    return hash;
}
int main(){
    power[0] = 1;
    for(int i = 1 ; i < N ; i++){
        power[i] = (power[i - 1] * p) % m;
    }

    vector<string>s = {"aa" , "ab" , "bc" , " cd" , "aa" , "fuck"};
    vector<long long>hashes;
    for(auto w : s){
        hashes.push_back(calculate_hash(w));
    } 
    sort(hashes.begin() , hashes.end());
    int distinct = 0 ;
    for(int i=0 ; i < hashes.size() ; i++){
        if(i == 0 or hashes[i] != hashes[i - 1]){
            distinct++;
        }
    }
    cout<<distinct<<"\n";
    return 0;
}