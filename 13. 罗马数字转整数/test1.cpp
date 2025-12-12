#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s)
{
    int sum = 0;
    int last = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        switch (s[i])
        {
        case 'I':
            if(last > 1)sum -= 1;
            else sum += 1;
            last = 1;
            break;
        case 'V':
            sum += 5;
            last = 5;
            break;
        case 'X':
            if(last > 10)sum -= 10;
            else sum += 10;
            last = 10;
            break;
        case 'L':
            sum += 50;
            last = 50;
            break;
        case 'C':
            if(last > 100)sum -= 100;
            else sum += 100;
            last = 100;
            break;
        case 'D':
            sum += 500;
            last = 500;
            break;
        case 'M':
            sum += 1000;
            last = 1000;
            break;

        
        default:
            break;
        }
    }
    return sum;
    
}

int main()
{
    string str ;
    cin >> str;
    int n;
    n = romanToInt(str);
    cout << n;
}