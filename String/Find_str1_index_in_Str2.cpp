#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="he";
    string t = "welcomhe hello";
    int S = s.size();
    int T = t.size();
    for(int i=0 ; i < T - S + 1 ; i++)
    {
        if(t.substr(i , S) == s){
            cout<<"Index Found at"<<i<<"\n";
        }
    }
    return 0;
}