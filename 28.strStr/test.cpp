#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.size();
        int len1 = haystack.size();
        if(len > len1)return -1;
        for (int j = 0; j < len1; j++)
        {
            if(haystack[j] == needle[0])
            {
                for (int i = 0; i < len;i++)
                {
                    if(needle[i] == haystack[j + i])
                    {
                        if(i == len - 1)return j;
                        continue;
                    }else{
                        break;
                    }
                }
            }
        }
        return -1;
    }
};

int main()
{
    string haystack = "saiusgfhaierghrbutd";
    string needle = "but";
    Solution sl;
    int n = sl.strStr(haystack,needle);
    cout << n;
    
}