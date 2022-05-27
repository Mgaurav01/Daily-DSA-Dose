/*
You are given a positive integer num consisting only of digits 6 and 9.


Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/
/*
Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666.
The maximum number is 9969.
*/

// code
//Approch 1

class Solution {
public:
    int maximum69Number(int num)
    {
        string s = to_string(num); //convert (num) into string, to iterate over each element
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '6')
            {
                s[i] = '9';
                break;
            }
        }
        return stoi(s); // return the converted(into int) s
    }
};
//Approch 2
class Solution {
public:
    int maximum69Number(int num)
    {
    int res =0,x;
        vector<int>a;
        while(num!=0){
            x = num%10;
            a.push_back(x);
            num = num/10;
        }
        for(int i = a.size()-1; i>=0; i--){
            if(a[i]==6){
                a[i] = 9;
                break;
            }
        }
        for(int i = 0; i<a.size(); i++){
            res += a[i] * pow(10, i);
        }
     return res;
    }