#include<bits/stdc++.h>
using namespace std;


// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true] 
// Explanation: If you give all extraCandies to:
// - Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
// - Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
// - Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
// - Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
// - Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.


void kidsWithCandies(vector<int>& candies, int extraCandies) {
       int max = *max_element(candies.begin(), candies.end());
       vector<bool> res;
       for(int i=0 ;i<candies.size();i++)
       {
         if(candies[i] + extraCandies >= max){
              res.push_back(true);
         }     
             else{
           res.push_back(false);   
         }    
        
       }
       for(int i=0;i<res.size();i++)
       {
           cout<<res[i];
       }
          
    }

    int main()
    {
        vector<int> candies = { 2,3,5,1,3};
        int extraCandies = 3;
        kidsWithCandies(candies , extraCandies);

        return 0;
    }