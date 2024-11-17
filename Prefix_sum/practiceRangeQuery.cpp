#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {1,2,3,4,5};
  int n = arr.size();

  vector<pair <int,int>> querie = {{0,2},{1,3},{2,4}};


  vector<int>prefix_sum(n);
  prefix_sum[0] = arr[0];
  for(int i=1; i<n; i++){
    prefix_sum[i] = prefix_sum[i-1]+ arr[i];
  }
  vector<int> s;
  for(auto it: querie){
    int l = it.first;
    int r = it.second;

   int sum = (l==0)?prefix_sum[r]:prefix_sum[r]-prefix_sum[l-1];
  s.push_back(sum);
  }

  for(auto it: s){
    cout<<it<<" ";
  }

  return 0;

}

