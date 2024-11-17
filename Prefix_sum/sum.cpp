#include <iostream>
#include <array>

using namespace std;
int swumOfArray(array<int, 5>&arr){
  int sum = 0;
  for(int i =0; i < arr.size(); i++){
    sum += arr[i];
  }
  return sum;
}

int main() {


  array<int, 5> arr ={2,4,6,77,2};
  int result = swumOfArray(arr);
  cout << result << endl;
  return 0;

}

