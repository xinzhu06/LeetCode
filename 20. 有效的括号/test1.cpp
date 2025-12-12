#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) 
{
    int small = 0;
    int mid = 0;
    int big = 0;
    int fsmall = 0;
    int fmid = 0;
    int fbig = 0;
    bool result = false;
    for(int i = 0;i < s.size();i++)
    {
        switch (s[i])
        {
        case '(':
            small = 1;
            fsmall = 1;
            break;
        case '[':
            mid = 1;
            fmid = 1;
            break;
        case '{':
            big = 1;
            fbig = 1;
            break;
        case ')':
            if(mid == 1 || big == 1)
            {
                if(fsmall != 1){
                    return result;
                }
                
            }
            small = 0;
            break;
        case ']':
            if(small == 1 || big == 1)
            {
                if(fmid != 1){
                    return result;
                }
                
            }
            mid = 0;
            break;
        case '}':
            if(mid == 1 || small == 1)
            {
                if(fbig != 1){
                    return result;
                }
                
            }
            big = 0;
            break;
        default:
            break;
        }
    }
    if(small == 0 && mid == 0 && big == 0)
    {
        result = true;
        return result;
    }else{
        return result;
    }
}

int main()
{
    string str1 = "([]{}))";
    if (isValid(str1))
    {
        cout << "true";
    }else{
        cout << "false";
    }
    
}