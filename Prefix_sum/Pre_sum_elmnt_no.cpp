// Problem: Given an integer array arr and a value x, find the number of elements in the prefix sum array that are greater than x.

// Input: arr = [1, 2, 5, 3, 7], x = 5
// Output: 2

#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int>arr = {1, 2, 5, 3, 7};
  int x = 5;
  int n = arr.size();
  vector<int>prefix_sum(n);
  prefix_sum[0] = arr[0];

  for(int i=1; i<n; i++){
    prefix_sum[i] = prefix_sum[i-1] + arr[i];
  }
  int count = 0;
  for(auto it: prefix_sum){
    if(it>5){
      count +=1;
    }
  }
  cout<<count<<endl;
for(auto it:prefix_sum){
  cout<<it<<" ";
}
 

  return 0;

}



