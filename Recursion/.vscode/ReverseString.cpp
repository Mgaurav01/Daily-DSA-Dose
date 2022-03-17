#include<bits/stdc++.h>
using namespace std;

void rev_again(vector<char>& s , int start , int end)
{
        if(start > end) return;
        
        swap(s[start] , s[end] );
        
        rev_again(s , start+1 , end-1);
        
        
}  

void reverseString(vector<char>& s) {
     rev_again(s, 0 , s.size()-1);
    }

int main()
{
    int size ; cin>>size;
    char ch;
    vector<char>s;
    for(int i=0;i<size;i++)
    {
        cin>>ch;
        s.push_back(ch);
    }
    reverseString(s);

    for(int i=0;i<size;i++)
    {
        cout<<s[i];
    }
    return 0;

}  