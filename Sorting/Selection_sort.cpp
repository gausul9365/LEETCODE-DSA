#include <iostream>

using namespace std;

int selectionSort(int arr[], int n){
  for(int i=0; i<n-1; i++ ){
    int smallestIdx = i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[smallestIdx]){
        smallestIdx = j;
      } 
    }
    swap(arr[i], arr[smallestIdx]);
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22};
  int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr, n);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

  return 0;

}
