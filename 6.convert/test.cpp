#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;
        vector<string>m(numRows);
        int flag = -1 ;
        int i = 0;
        for(char n:s)
        {
            m[i].push_back(n);
            if(i == 0 || i == numRows-1)
            {
                flag = -flag;
            }
            i += flag;
        }
        string ans;
        for(auto &o:m)
        {
            ans += o;
        }
        return ans;
    }
};