#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  
  for(int i=0; i<n; i++){
    bool isSwap = false;
    for(int j=0; j<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        isSwap = true;
      }
    }
    if(!isSwap){
      return;
    }
  }
}
void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}


int main() {

int arr[] = {5,6,3,4,9};
int n = sizeof(arr)/sizeof(arr[0]);

bubbleSort(arr,n);
print(arr,n);

  return 0;

}

