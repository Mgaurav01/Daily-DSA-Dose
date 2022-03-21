#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s ,int temp)
{
    if(s.size()==0)
    {
        s.push(temp);
        return;
    }
    int ele = s.top();
    s.pop();
    insert(s,temp);
    s.push(ele);

    return ;
}
void reverse(stack<int> &s)
{
   if(s.size() == 0)
   {
       return;
   } 
   int temp = s.top();
   s.pop();
   reverse(s);
   insert(s,temp);
   return;
}
int main()
{
    int size; cin>>size;
    int a;
    stack<int> s;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        s.push(a);
    }
    

    reverse(s);
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    
    return 0;
}