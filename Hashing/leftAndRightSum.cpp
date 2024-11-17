#include <iostream>
#include <vector>

using namespace std;

int main() {
  int arr[] = {10,4,8,3};
  int n = sizeof(arr)/sizeof(arr[0]);

  vector<int> left(n);
  vector<int> right(n);
  
  left[0] = 0;
  for(int i=1; i<n; i++){
    left[i] = left[i-1] + arr[i-1];
  }
  
  right[n-1] = 0;
  for(int i= n-2; i>=0; i--){
    right[i] = right[i+1] + arr[i+1];
  }

  vector<int> answer(n);
  for(int i=0; i<n; i++){
    answer[i] = abs(left[i] - right[i]);
  }
  
  for(int i=0; i<n; i++){
    cout<<answer[i]<< " ";
  }
  return 0;

}

