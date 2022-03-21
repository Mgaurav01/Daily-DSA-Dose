#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v , int temp)
{
  if(v.size()==0 || v[v.size()-1] <= temp)
  {
    v.push_back(temp);
    return;
  }
  int val = v[v.size()-1];
  v.pop_back();
  insert(v , temp);
  v.push_back(val);
}

void sorting(vector<int> &arr)
{
  if(arr.size()==0)
  {
    return ;
  }
  int temp = arr[arr.size()-1];
  arr.pop_back();
 sorting(arr);
 insert(arr,temp); 

  
}
int main()
{
  vector<int> v = {6,4,5,3,2};
  sorting(v);
  for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<"";
    }
  return 0;
}