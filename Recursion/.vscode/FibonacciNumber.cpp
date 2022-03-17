#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
     if(n<2) return n;
        
     else
         return fib(n-1)+fib(n-2);
    
    }

int main()
{
    int n;cin>>n;
    int sumfib = fib(n);
    cout<<sumfib;
    return 0;
}    