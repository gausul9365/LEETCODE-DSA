#include <iostream>
#include <vector>
//it consist only two steps 
using namespace std;

void prefix_sum(vector<int>&arr, int n, vector<int>&prefix_Arr){
  prefix_Arr[0] = arr[0]; // step-1
  // prefix sum ka pahla approch original array ke 0 index ki value pahle hi new array ki 0 index pe rakh denge 

  for(int i=1; i<n; ++i){    //fir loop k throuh sbko addkr lo ajaise add kiya jata hai 
    prefix_Arr[i] = prefix_Arr[i-1] + arr[i]; // step-2
      //isme ab original array ka ek index aage aur new wale ka ek index picche wala add higa taaki wo apne se pichhe wale no, ko add ker ske 
  }
}

int main(){
  vector<int> arr = {1,2,3,45,65};
  int n = arr.size();

  vector<int> prefix_arr(n); //yha new array create krke size pass kr diya gya taaki is array ka same size ho , sb aad hoke isime aaeya 

  prefix_sum(arr, n, prefix_arr);

  for(int i=0; i<n; i++){
    cout<<prefix_arr[i]<<" ";
  }
  return 0;
}
