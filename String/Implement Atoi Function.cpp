//Works only for which dont have white-space
//CodeNinja
int atoi(string str) { 
    // Write your code here.
    int ans = 0 ;
    int n = str.size();
    int i = 0 , sign = 1;
    if(str[i] == '-'){
        sign = -1;
        i++;
    }
    for(;i<n;i++){
        if(str[i] >= '0' && str[i]<='9'){
            ans = ans * 10;
            ans = ans + (str[i] - '0');
        }
    }
    return ans * sign;
}
//Work for White space 
//Leetcode
class Solution {
public:
    int myAtoi(string s) {
        
        // helper variables
        int res=0;
        int i=0;
        int sign=1;
		
        while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        
        if(s[i]=='-'||s[i]=='+')          //check if number positve or negative
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        // now iterate across digits if any
		// should only be in range 0-9
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  //traverse string till nondigit not found or string ends
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
            if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
            res=res*10+digit; // update res
            i++;
        }
    
    return res;
    }
};
