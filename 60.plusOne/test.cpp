#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() - 1;
        vector<int>ans;
        int pos = 0;
        if(digits[len] != 9)
        {
            digits[len]++;
            return digits;
        }
        
        for (int i = len; i >= 0; i--)
        {
            if(digits[i] != 9)
            {
                pos = i+1;
                break;
            }
        }
        if(pos == 0)
        {
            ans.push_back(1);
            for (int  i = 0; i < len+1; i++)
            {
                ans.push_back(0);
            }
            return ans;
        }else{
            digits[pos-1]++;
            for (int  i = pos; i < len+1; i++)
            {
                digits[i] = 0;
            }
            return digits;
        }
        
    }
};

int main()
{
    vector<int>test;
    test.push_back(1);
    test.push_back(3);
    test.push_back(9);
    test.push_back(9);
    test.push_back(9);
    test.push_back(9);
    Solution sl;
    vector<int>n = sl.plusOne(test);
    for (auto &s:n)
    {
        cout << s  ;
    }
 
    
}