#include<bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int i = 0;
        for (int x : pushed) {
            stack.push(x);
            while (stack.size() && stack.top() == popped[i]) {
                stack.pop();
                i++;
            }
        }
        return stack.size() == 0;
}
int main()
{
    vector<int>pushed = {1,2,3,4,5};
    vector<int>popped = {4,5,3,2,1};

    bool ans = validateStackSequences(pushed , popped);
    cout<<ans;
    return 0;
}