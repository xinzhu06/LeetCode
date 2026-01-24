#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int ans = 0;
        for(int i = len-1;i >= 0;i--)
        {
            if(s[i] != ' ')
            {
                ans++;
            }else{
                if(ans != 0)
                {
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main()
{
    string s = "a";
    Solution sl;
    int n = sl.lengthOfLastWord(s);
    cout << n;

}