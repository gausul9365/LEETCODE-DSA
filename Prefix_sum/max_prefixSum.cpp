// Problem: Use the prefix sum technique to find the maximum sum of any subarray in the array.

// Input: arr = [1, -3, 2, 1, -1]
// Output: 3  // The subarray [2, 1] has the maximum sum of 3

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int>arr = {4, -2, -8, 5, 3};
  int n = arr.size();

  vector<int>prefix_sum(n);
  prefix_sum[0] = arr[0];
  for(int i=1; i<n; ++i){
    prefix_sum[i] = prefix_sum[i-1] + arr[i];
  }
  int max_prefix_sum = prefix_sum[0];
  for(auto it : prefix_sum){
    if(max_prefix_sum <it){
      max_prefix_sum = it;
    }
  }
  cout<<max_prefix_sum;

  


  return 0;

}

