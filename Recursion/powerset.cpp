                                                    /*PowerSet/allSubset*/
// #include <iostream>    //Not using Recursion!!!
// #include <math.h>
// using namespace std;

// class gfg
// {
	
// public:
// void printPowerSet(char *set, int set_size)
// {
// 	/*set_size of power set of a set with set_size
// 	n is (2**n -1)*/
// 	unsigned int pow_set_size = pow(2, set_size);
// 	int counter, j;

// 	/*Run from counter 000..0 to 111..1*/
// 	for(counter = 0; counter < pow_set_size; counter++)
// 	{
// 	for(j = 0; j < set_size; j++)
// 	{
// 		/* Check if jth bit in the counter is set
// 			If set then print jth element from set */
// 		if(counter & (1 << j))
// 			cout << set[j];
// 	}
// 	cout << endl;
// 	}
// }
// };

// /*Driver code*/
// int main()
// {
// 	gfg g;
// 	char set[] = {'a','b','c'};
// 	g.printPowerSet(set, 3);
// 	return 0;
// }

/*
#include <bits/stdc++.h>             Recursion Approch
#include<iostream>
using namespace std;
void solve(string ip , string op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    solve(ip ,op1);
    solve(ip ,op2);
    return ;
    
}
int main()
{
    string ip ; cin>>ip;
    string op ="";
    solve(ip , op);
    return 0;
}
*/