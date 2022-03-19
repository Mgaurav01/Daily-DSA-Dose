#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
   
    int maxleft[n];
    
    int maxright[n];    
    
    maxleft[0] = height[0];
    
    maxright[n-1] = height[n-1];
    
    for(int i=1;i<n;i++)
    {
        maxleft[i] = max(height[i],maxleft[i-1]);  //comparing with (i-1) with i;
    }    
    
    for(int i=n-2;i>=0;i--)
    {
        maxright[i] = max(height[i],maxright[i+1]) ;  //comparing with (i+1) with i;
    }    
    
    int water[n];
    
    for(int i=0;i<n;i++)        
    {
        water[i] = min(maxleft[i],maxright[i])-height[i];
    }
    int sum=0;    
    
    for(int i=0;i<n;i++)        
    {
        sum +=water[i];
    }
    return sum;    
}

int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);

    cout<<ans;

    return 0;

}
