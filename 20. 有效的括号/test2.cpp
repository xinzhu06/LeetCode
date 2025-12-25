#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
    char input;
    stack<char>val;
    unordered_map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    for(int i = 0;i < s.size();i++)
    {
        input = s[i];
        
    }
    if (val.empty())
    {
        return true;
    }else{
        return false;
    }
    
}

int main()
{
    string s = "";
    getline(cin ,s);
    if(isValid(s)){
        cout << "true";
    }else{
        cout << "false";
    }
}