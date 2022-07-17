class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
     vector<int> v(arr.size() , 0);
     stack<int> s;
      
     for(int i=arr.size()-1 ; i>=0 ; i--)
     {
       while(s.size() > 0 and arr[s.top()] <= arr[i])
            s.pop();
       
       //if(s.size() == 0) v.push_back(0);
         
       if(!s.empty()) v[i] = s.top() - i;
       
       s.push(i);
     }
     return v; 
    }
};