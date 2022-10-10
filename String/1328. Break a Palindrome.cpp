//Approch 1
class Solution {
public:
    string breakPalindrome(string palindrome) {
      int n = palindrome.size();
      if(n==1) return "";

      for(int i=0;i<n/2;i++)
      {
        if(palindrome[i] != 'a')
        {
          palindrome[i] = 'a';
          return palindrome;
        }
      }
      palindrome[n-1] = 'b';

      return palindrome;

    }
};

//Approch 2
class Solution {
public:
    string breakPalindrome(string p) {
        int start = 0, end = p.size() - 1;
        if(p.size() <= 1) return "";
        while(start < end){
            if(p[start] != 'a' && p[end] != 'a'){
                p[start] = 'a';
                return p;
            }
            else{
                start++; end--;
            }
        }
        p[p.size() - 1] = 'b';
        return p;
    }
};
