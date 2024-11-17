// Problem: Given an integer array, check if there exists a subarray with a sum equal to zero. Return true if it exists, otherwise false.

// Input: arr = [3, 4, -7, 5, -6, 6]
// Output: true

#include <iostream>
#include <vector>

using namespace std;

bool findTrue(vector<int>&prefix_sum, int n){

  for(int i=0; i<n; i++){
    if(prefix_sum[i]==0){
      return true;
      break;
    }
  }  
  return false;

}
int main() {

  vector<int>arr = {3, 4, -7, 5, -6, 6};
  int n = arr.size();

  vector<int>prefix_sum(n);
  prefix_sum[0] = arr[0];
  for(int i=1; i<n; i++){
    prefix_sum[i] = prefix_sum[i-1] + arr[i];
  }

  
  if(findTrue(prefix_sum, n)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }


  return 0;

}

