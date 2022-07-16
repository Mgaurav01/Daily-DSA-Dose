class Solution {
public:

vector<string> generateParenthesis(int n) {
     int start = n , end = n;
      string op = "";
        vector<string>v;
      solve(start , end , v , op);
      return v;  
}
void solve(int open , int close , vector<string> & v,string op)
{    
    if(open == 0 and close == 0) 
        v.push_back(op);
    
      if(open != 0) 
      { 
       string op1 = op;
       op1.push_back('('); 
       solve(open -1 , close , v , op1);
      }
    
     if(close > open) 
     { 
      string op2 = op; 
      op2.push_back(')');
      solve(open, close -1 , v , op2); } 
     }
};