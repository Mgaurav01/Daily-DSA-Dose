/* LEVEL -> EASY
We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.
*/

class Solution {
public:
    int guessNumber(int n) {
       int l = 0 , r = n;
       while( l <= r)
       {
          int mid = l + (r - l) / 2;

          int ans = guess(mid);
          if(ans == 0)
              return mid;
          else if(ans < 0)
              r = mid - 1;
          else
             l = mid + 1;
       }
      return -1;
    }
};
