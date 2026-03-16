#include <stdio.h>

int main(){
  int arr[] = {23,4,5,63,6,72,3,34,100};

  int n = sizeof(arr)/sizeof(arr[0]);
  
  int min = __INT_MAX__;
  int max = 0;
  for(int i=0; i<n-1; i++){
    if(arr[i] < arr[i+1]){
      if(arr[i]<min){
        min = arr[i];
      }
      if(arr[i+1] > max){
        max = arr[i+1];
      }
    }

    else {
      if(arr[i+1] < min){
        min = arr[i+1];
      }
      if(arr[i]>max){
        max = arr[i];
      }
    }
  }

  printf("%d , %d", min, max);
}