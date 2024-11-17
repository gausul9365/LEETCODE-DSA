// Reverse an Array

// simple approch
#include <iostream>
#include <vector>

using namespace std;

int reverseArray(const int arr[], int n , vector<int>&rev_arr){
  for(int i=0; i<n; i++){
    rev_arr[i]= arr[n-1-i];
  }
  
}
int main() {

  int arr[]= {1,3,7,9};

  int n = sizeof(arr)/sizeof (arr[0]);

  vector<int> rev_arr(n);

  reverseArray(arr, n, rev_arr);
  cout<<"arr: ";
  for(int it : arr){
    cout<<it<<" ";
  }
  cout<<endl;
  cout<<"Reverse arr: ";
  for(int i =0; i<n; i++){
    cout<<rev_arr[i]<<" ";
  }

  return 0;

}

