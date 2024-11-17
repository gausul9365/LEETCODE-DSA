#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> res;
        int n= nums.size();
        res.push_back(nums[0]);
        int sum = nums[0];

        for(int i =1; i<n; i++){

            sum = sum + nums[i];
            res.push_back(sum);
        }
        return res;
          
    }
};