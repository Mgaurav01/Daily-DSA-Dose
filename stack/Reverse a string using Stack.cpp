#include <bits/stdc++.h>
using namespace std;

void reverse(char *s, int len)
{
  
    stack<char> stk;
    for (int i = 0; i < len; i++)
    {
        stk.push(s[i]);
    }
    int i=0;
    while(stk.size()>0)
    {
        s[i]=stk.top();
        stk.pop();
        i++;
    }
   
    for(int i=0;i<len;i++)
    {
      cout<<s[i];
    }
}
int main()
{
    char s[] = "GeeksforGeeks";
    int len = strlen(s);
    reverse(s,len);
    return 0;
}
