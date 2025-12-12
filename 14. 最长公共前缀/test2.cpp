#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<string> &v)
{
    for (vector<string>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    
}


void test1()
{
    vector<string>str;
    str.push_back("flower");
    str.push_back("flow");
    str.push_back("flowf");
    auto shortest = min_element(str.begin(),str.end());
    cout << *shortest;
}

int main()
{
    test1();
}