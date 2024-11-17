#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<int> res;
        int n = nums.size();
        for(int i =0; i<n; i++){
            res.push_back(nums[i]*nums[i]);

        }
        sort(res.begin(),  res.end());
        return res;
    }
};
