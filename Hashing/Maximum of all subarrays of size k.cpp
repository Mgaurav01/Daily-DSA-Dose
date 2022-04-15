#include <bits/stdc++.h>
using namespace std;
vector<int>slidingMaximum(const vector<int> &A, int B) {
    list<int>l;
    int i=0,j=0;
    vector<int>ans;
    int k = B;
    int n = A.size();
    while(j < n){
        if(l.empty())
            l.push_back(A[j]);
        else{
            while(!l.empty() && l.back() < A[j])
                l.pop_back();
            l.push_back(A[j]);    
        }
        if((j-i+1) < k)
            j++;
        else if((j-i+1)==k)
        {
            ans.push_back(l.front());
            if(l.front()==A[i])
                l.pop_front();
            i++;
            j++;    
        }        
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return ans;
}
int main(){
    int k = 3;
    vector<int>v={1, 3, -1, -3, 5, 3, 6, 7};
    slidingMaximum(v , k);
    return 0;
}
