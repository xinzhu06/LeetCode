#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int len = arr.size();
        vector<int>difference;
        vector<vector<int>>ans;
        
        for(int i = 1;i < len;++i)
        {
            int dif = arr[i]-arr[i-1];
            difference.push_back(dif);
        }
        auto min = min_element(difference.begin(),difference.end());
        for(int i = 0 ;i < len-1 ; ++i)
        {
            if(difference[i] == *min)
            {
                vector<int>ans1;
                ans1.push_back(arr[i]);
                ans1.push_back(arr[i+1]);
                ans.push_back(ans1);
            }
        }
        return ans;
    }
};

int main()
{

}