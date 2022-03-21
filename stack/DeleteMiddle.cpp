#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    stack<int> solve(stack<int> &s , int k)
    {
        if(k==1){
            s.pop();
            return s;
        }
        int temp = s.top();
        s.pop();
        solve(s , k - 1);
        s.push(temp);
        return s;
      
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
       int k ;
       if(sizeOfStack % 2 == 0)
       {
            k =ceil(sizeOfStack/2.0) + 1; 
       }
       else{
           k = ceil(sizeOfStack/2.0);
       }
       solve(s,k);
    }
};

// { Driver Code Starts.
int main() {
    int t;  
    cin>>t;  
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends