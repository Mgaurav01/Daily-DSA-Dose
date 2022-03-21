#include <bits/stdc++.h> //Doubt!
using namespace std;
void inserting(stack<int> &s , int temp)
{
    if(s.size()==0 || s.top() <=temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    inserting(s , temp);
    s.push(val);
}
void sorting(stack<int> &s)
{
    if(s.size()==0)
    {
        return ;
    }
    int temp = s.top();
    s.pop();
    sorting(s);
    inserting(s,temp);

}
int main()
{
    vector<int> v  = {1,2,3,4};
    stack<int> s;
    for(int i=0;i<v.size();i++)
    {
        s.push(v[i]);
    }
    cout<<"Before sorting";
    
    sorting(s);
    while(!s.empty())
    {
        cout<<s.top()<<"";
            s.pop();
    }
    return 0;
}