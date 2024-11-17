// Problem: Given an integer array, find the minimum prefix sum.

// Input: arr = [4, -2, -8, 5, 3]
// Output: -6

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
  int min_prefix_sum = prefix_sum[0];
  for(auto it : prefix_sum){
    if(min_prefix_sum >it){
      min_prefix_sum = it;
    }

  }
  cout<<min_prefix_sum;

  

  return 0;

}

