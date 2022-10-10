Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input:
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
      ->   {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

code:
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
int i=0,j=0;
int temp=0,sum=0,maxi=0;
while(i < n)
{
   temp += arr[i][j];

   if(j+1 == m)
   {
       j=0;
       if(temp > sum)
       {
           sum = temp;
           maxi = i;
       }
       i++;
       temp=0;
   }
   else
    j++;
}
return (sum != 0) ? maxi : -1;
}
