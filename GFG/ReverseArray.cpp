#include <iostream>
#include <vector>

using namespace std;
int reverseArray(vector<int>&rev, int n){
  int first = 0;
  int last =n-1;
 while(first<last){
    swap(rev[first], rev[last]);
    first++;
    last--;
  }

  for(int i=0; i<n; i++){
    cout<<rev[i]<< " "; 

  }
}

int main() {
  vector<int>arr = {1, 4, 3, 2, 6, 5};
  int n = arr.size();

  reverseArray(arr, n);


  return 0;

}

