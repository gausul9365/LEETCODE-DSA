#include <iostream>
#include <vector>

using namespace std;


    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        int i =1;
        while(i<=n){
            if(n%i==0){
            result += nums[i-1]*nums[i-1];
            }
            i++;
        }

        return result;
        
    }

int main() {

  vector<int> nums = {1,2,3,4};
  cout << sumOfSquares(nums) << endl;

  return 0;

}

