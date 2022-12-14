/*
Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack. 
*/
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
//other approch EASY ONE :-https://www.youtube.com/watch?v=IIU646w5rZI&list=PLDdcY4olLQk3cAxZPJXMbxqrM3PlNkmO8&index=3
/*

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>> v;
        for(int i=0;i<n;i++)
        {
            double x = (arr[i].value * 1.0) / (arr[i].weight * 1.0);
            v.push_back({x , i});
        }
        sort(v.begin() , v.end() , greater<pair<double,int>>());
        int s = 0;
        double ans = 0;
        for(int i = 0 ; i < v.size() ; i++)
        {
            if(s + arr[v[i].second].weight < W)
            {
                ans += arr[v[i].second].value;
                s += arr[v[i].second].weight;
            }
            else
            {
                double x = (W - s) * 1.0;
                ans += (x * v[i].first);
                break;
            }
        }
        return ans;
    }
        
};


*/

class Solution
{
   public:
   static bool comp(Item a, Item b) {
       double r = (double)a.value/(double)a.weight;
       double r1 = (double)b.value/(double)b.weight;
       return r > r1;
   }
   //Function to get the maximum total value in the knapsack.
   double fractionalKnapsack(int W, Item arr[], int n)
   {
       // Your code here
       sort(arr,arr+n);
       int cur_w = 0;
       double profit = 0.0;
       for(int i =0;i<n;i++) {
           if(cur_w + arr[i].weight <= W) {
               profit += arr[i].value;
               cur_w += arr[i].weight;
           }
           else {
               int remain = W - cur_w;
               profit += (double)remain/(double)arr[i].weight * arr[i].value;
               break;
           }
       }
       return profit;
   }
       
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends