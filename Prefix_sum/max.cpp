// Find the Maximum Element

#include <iostream>
#include <array>

using namespace std;

int maxOfArray(array<int, 6>&arr){
  int max = arr[0];
  for(int i =1; i< arr.size(); i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}

int main() {

  array<int, 6> arr;
  cout<<"enter array element: ";
  for(int i = 0; i<arr.size(); i++){
    cin>>arr[i];
  }

  int result =  maxOfArray(arr);
  cout<<"mximum elemnt in array is: "<<result ;

  return 0;

}

