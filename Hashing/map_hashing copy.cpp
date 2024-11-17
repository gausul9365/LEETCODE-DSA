// we dont need to give the size it take only size the element pass by user
// in map it already assign zero for unitialise value means if we access unknown number that is not in the map then it give 0 instead of garbage value
// its stores value in order-wise like increasing order

// thats why it good to prefer map for hasing 

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

int arr[] = {2,4,56,74,2,54,74,4,4,4,4,0};
int n  = 13;
map<int, int> mpp;

for(int i=0; i<n; i++){
  mpp[arr[i]]++;
}

int q;
cin>>q;
while (q--)
{
  int qureis;
  cin>>qureis;
  cout<<mpp[qureis]<<endl;
}


for(auto it : mpp){
  cout<<it.first<<"-->"<<it.second<<" ";
}
  return 0;

}

