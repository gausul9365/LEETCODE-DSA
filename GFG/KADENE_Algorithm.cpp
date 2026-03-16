// Maximum Sub array
#include <iostream>

using namespace std;

int maxSubarray(int arr[], int n){
  int sum = 0;
  int maxi = arr[0];
  for (int i = 0; i < n; i++){
    sum = sum + arr[i];

    maxi = max(maxi, sum);

    if(sum<0){
      sum =0;
    }
  }

  cout<<maxi;
}



int main() {
int arr[] = {2, 3, -8, 7, -1, 2, 3};
int n = sizeof(arr) / sizeof(arr[0]);

maxSubarray(arr, n);

  return 0;

}

