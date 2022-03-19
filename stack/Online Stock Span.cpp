#include<bits/stdc++.h>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Example 1:

// Input
// ["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
// [[], [100], [80], [60], [70], [60], [75], [85]]
// Output
// [null, 1, 1, 1, 2, 1, 4, 6]

// Explanation
// StockSpanner stockSpanner = new StockSpanner();
// stockSpanner.next(100); // return 1
// stockSpanner.next(80);  // return 1
// stockSpanner.next(60);  // return 1
// stockSpanner.next(70);  // return 2
// stockSpanner.next(60);  // return 1
// stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
// stockSpanner.next(85);  // return 6
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class StockSpanner {
    stack<pair<int, int>> s;
    int day = 0;
    vector<int> v;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.size()==0) {
            v.push_back(-1);
        } else {
            if(s.top().first > price) {
                v.push_back(s.top().second);
            }else {
                while(!s.empty() && s.top().first <= price) {
                    s.pop();
                }
                if(s.empty()) {
                    v.push_back(-1);
                } else {
                    v.push_back(s.top().second);
                }
            }
            
        }
        
        s.push({price, day});
        return day - v[day++];
      
    }
};


