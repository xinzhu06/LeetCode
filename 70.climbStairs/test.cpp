#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
       int p = 0,q = 0 ,r = 1;
       for(int i = 1;i <= n;i++)
       {
            p = q;
            q = r;
            r = p + q;
       } 
       return r;
    }
};

int main()
{
    Solution sl;
    int n = sl.climbStairs(4);
    cout << n;

}