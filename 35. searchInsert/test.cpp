#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0,right = n-1,ans = n;
        while (left <= right)
        {
            int mid = ((right - left) >> 1) + left;
            if(target <= nums[mid])
            {
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    int target = 5;
    Solution sl;
    int n = sl.searchInsert(nums,target);
    cout << n;
}