class Solution {
public:
    int evalRPN(vector<string>& t) {
    stack<int>s;
        for(int i=0;i<t.size();i++)
        {
            if(t[i] == "+" or t[i] == "-" or t[i] == "/" or t[i] == "*")
            {
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                switch(t[i][0]) //switch case take only char value & t[i] is string
                {
                    case '+':
                        s.push(op1 + op2);
                        break;
                    case '-':
                        s.push(op1 - op2);
                        break;
                    case '/':
                        s.push(op1 / op2);
                        break;
                    case '*':
                        s.push(op1 * op2);
                        break;
                }
            }
            else
            {
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};