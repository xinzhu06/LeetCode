#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    char c = strs[0][0];
    string result = "";
    int j = 0;
    auto shortest = min_element(strs.begin(),strs.end());
    while((*shortest)[j] != '\0')
    {
        for (int i = 0; i < strs.size(); i++)
        {
            if(strs[i][j] != c)
            {
                return result;
            }
        }
        j++;
        result += c;
        c = strs[0][j];
    }
    return result;
    
    
}

void test1()
{
    vector<string>str;
    str.push_back("flower");
    str.push_back("flowerte");
    str.push_back("flowergfdg");
    string str1 = longestCommonPrefix(str);
    cout << str1 << endl;
}

int main()
{
    test1();
}