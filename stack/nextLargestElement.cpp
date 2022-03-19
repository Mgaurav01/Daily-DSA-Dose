#include <bits/stdc++.h>   //not working!
using namespace std;

int main()
{
    vector<int> arr={1,3,2,4};
    stack<int> s;
    vector<int> v;
    for(int i=arr.size();i>=0;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
            }

    while(!s.empty())
    {
        cout<<s.top()<<"";
        s.pop();
    }      
    return 0;
}