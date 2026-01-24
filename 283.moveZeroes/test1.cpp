#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast = 1;
        int slow = 0;
        for(int i = 0;i < nums.size()-1;i++)
        {
            if(fast > nums.size()-1)break;
            if(nums[fast] == 0)
            {
                if(nums[slow] == 0)
                {
                    fast++;
                    continue;
                }   
            }
            if(nums[slow] == 0)
            {
                int temp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = temp;         
            }
            fast++;
            slow++; 
        }
    }
};


int main()
{
    vector<int>nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    nums.push_back(1010);
    nums.push_back(12);
    nums.push_back(12);
    for(auto const&s:nums)
    {
        cout << s << " ";
    }
    cout << endl;

    //取零后
    Solution s1;
    s1.moveZeroes(nums);
    for(auto const&s:nums)
    {
        cout << s << " ";
    }
    cout << endl;
}