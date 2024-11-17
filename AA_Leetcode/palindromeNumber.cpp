#include <iostream>

using namespace std;

int isPalindrome(int x){
  int reminder;
  long rev =0;
  int orginal = x;

  if (x<=0){
    return false;
  }
  while (x!=0)
  {
    reminder = x%10;
    rev = rev*10 + reminder;
    x = x/10;
  }

  if(rev == orginal){
    return true;
  }
  else{
    return false;
  }
  
}

int main() {

int x = 1224442281;

cout<< isPalindrome(x)<<endl;

  return 0;

}

