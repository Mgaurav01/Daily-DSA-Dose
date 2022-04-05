#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string solve(string ip , string op , set<string> &s)
{
  if(ip.size()==0)
  {
    s.insert(op);
    return op;
  }
  //s.insert(v);
  //print(s);
  string op1 = op;
  string op2 = op;
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip , op1 , s);
  solve(ip , op2 , s);
  
  return op ;
}
int main()
{
  string ip;
  cin>>ip;
  string op = " ";
  set<string>s;
  solve(ip , op , s);
  for(string value : s)
    {
      cout << value << endl;
    }
  return 0;
}