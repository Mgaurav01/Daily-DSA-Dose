class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
      map<int,int>m;
      int s = size/2;
      for(int i=0;i<size;i++)
        m[a[i]]++;
      int maxi =0 , res=0;
      for(auto i : m)
      {
          int ans = i.second;
          if(ans > maxi)
          {
              maxi = ans;
              res = i.first;
          }
      }
      if(maxi > s)
        return res;
      return -1;
    }
};
