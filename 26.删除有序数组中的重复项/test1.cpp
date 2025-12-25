#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int arrayNumber = nums.size();
        int index = 1;
        for (int t = 1; t < nums.size(); t++)
        {
            if(nums[index] == nums[index-1])
            {
                for(int i = index; i < nums.size()-1;i++)
                {
                    nums[i] = nums[i+1];
                }
                arrayNumber--;
            }else{
                index++;
            }
        }
        return arrayNumber;
    }
};

int main()
{
    vector<int>test1;
    //排序前
    test1.push_back(1);
    test1.push_back(1);
    test1.push_back(2);
    test1.push_back(2);
    test1.push_back(3);
    test1.push_back(4);
    Solution S1;
    int num = S1.removeDuplicates(test1);
    cout << num << endl;
}