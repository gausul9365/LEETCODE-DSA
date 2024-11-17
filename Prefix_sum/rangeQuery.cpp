#include <iostream>
#include <vector>
// Given an array of integers and multiple queries, each defined by indices l and r, find the sum of elements from index l to index r (inclusive) for each query.
// Input: arr = [1, 2, 3, 4, 5]
// Queries: [(0, 2), (1, 3), (2, 4)]
// Output: 6, 9, 12

using namespace std;

int main() {
  vector<int>arr= {1, 2, 3, 4, 5};
  vector<pair<int, int>>queries = {{0, 2}, {1, 3},{2,4}};
   int n = arr.size();
  
    vector<int> prefix_sum(n); 
    prefix_sum[0] = arr[0];    //pahle hi prefix sum nila liya aur baad ,e logic lagake range k base pe value de diya 
    for(int i = 1; i<n; ++i){
      prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
  
  vector<int> result;
  for(auto it : queries){
    int l = it.first, r = it.second;

   int sum = (l==0)?prefix_sum[r]: prefix_sum[r] - prefix_sum[l-1]; // logic
    result.push_back(sum);
  }
  
  for(auto it: result){
    cout<<it<<" ";
  }

  return 0;

}

