#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int len = nums.size();
        int a = count(nums.begin(),nums.end(),val);
        int k = len - a;
        int blank = 0;
        for (int i = 0; i < len; i++)
        {
            if(nums[i] != val)
            {
                if(blank != 0)
                {
                    nums[i-blank] = nums[i];
                }else{
                    continue;
                }
            }
            else{
                blank++;
            }
        }
        
        return k;
    }
};

int main()
{
    vector<int>nums;
    int val = 30;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(30);
    Solution sl;
    int a = sl.removeElement(nums,val);
    cout << a << endl;
    for (int i = 0; i < a; i++)
    {
        cout << nums[i] << " " ;
    }
    
}