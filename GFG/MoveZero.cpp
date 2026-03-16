#include <iostream>
#include <vector>

using namespace std;
void moveZero(int arr[], int n){
  int insertionPlace = 0;

  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      arr[insertionPlace] = arr[i];
      insertionPlace++;
    }
  }

  while(insertionPlace<n){
    arr[insertionPlace++] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

}

int main() {

  int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
  int n= sizeof(arr)/sizeof(arr[0]);
  moveZero(arr,n);


  return 0;

}

