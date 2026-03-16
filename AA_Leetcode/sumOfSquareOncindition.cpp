#include <iostream>
#include <cmath>
using namespace std;

bool squareCheck(int c){

  if(c<0){
    return false;

  }

  int left =0;
  int right = (int) sqrt(c);

  while(left<=right){
    long sum = left * left + right*right;

    if(sum==c){
      return true;
    }
    else if(sum<c){
      left ++;
    }
    else{
      right --;
    }
  }

  return false;
}

int main() {

  int c= 4;

  cout<<squareCheck(c);
  return 0;

}

