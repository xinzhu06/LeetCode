#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(int x)
{
    string str1 = to_string(x);
    string str2 = str1;
    reverse(str1.begin(),str1.end());
    if (str1 == str2)
    {
        return true;
    }else{
        return false;
    }
    
}

void test1()
{
    int x = -200;
    string str1 = to_string(x);
    cout << str1 << endl;
    reverse(str1.begin(),str1.end());
    cout << str1 << endl;
}

int main()
{
    //test1();
    cout << isPalindrome(10);
}