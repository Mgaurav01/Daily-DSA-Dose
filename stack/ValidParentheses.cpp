/*class Solution {
public:
    bool isValid(string s) {
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if(st.size() == 0) return false;
            
            else if(s[i] == ')'){
                if(st.top() == '(')
                    st.pop();
                else {
                    return false;
                }
            }
            else if(s[i] == ']'){
                if(st.top() == '[')
                    st.pop();
                else {
                    return false;
                }
            }
            else if(s[i] == '}'){
                if(st.top() == '{')
                    st.pop();
                else {
                    return false;
                }
            }
        }
            
    }
    if(st.empty()==0) return false; // for '[' its shows true but it should be false!   
    return true;    
    }
};
*/