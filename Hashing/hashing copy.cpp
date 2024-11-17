#include <iostream>

using namespace std;

int main() {

int arr[] = {1,2,3,4,5,3,1,2};
int size = 8;

// hm pahle se hi ek array bna k rakhenge jisme sare idenx k 0 value honge aur fir jo array hoga use idex value ki tarah pass krenge for loop se , jitni baar same value aaegi hash me utni baar count 1 se increase hoga issee hme saare element ke repetition ek hi baar me pta ho jaenege

// precompute 
int hash[12] ={0};
for(int i=0; i<size; i++){
    hash[arr[i]] +=1; 
}

int q;
cin>>q;
while(q--){
  int number; 
  cin>>number;

  cout<<hash[number]<<endl;
}

  return 0;

}

