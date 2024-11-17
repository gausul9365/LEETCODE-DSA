#include <iostream>

using namespace std;

 void recursive_reverse(int arr[], int left, int right){
  int temp;

  if(left>=right){
    return;
  }
    
  
  temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;

  recursive_reverse(arr, left+1, right-1 );
   }


int main() {

  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);

  recursive_reverse(arr, 0, n-1);

  for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;

}

