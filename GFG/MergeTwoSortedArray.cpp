#include <iostream>

using namespace std;


int main(){

  int arr1[] = { 10,20,50};
  int arr2[] = { 5,50,50};

int n1 = sizeof(arr1)/ sizeof(arr1[0]);
int n2 = sizeof(arr2)/ sizeof(arr2[0]);

int* final = new int[n1+n2];
int i =0, j=0, k=0; 
while(i<n1 && j<n2){
  if(arr1[i]<= arr2[j]){
    final[k] = arr1[i];
    i++;
  }
  else{
    final[k] = arr2[j];
    j++;
  }
  k++;
}
while(i<n1){
  final[k] = arr1[i];
  i++;
  k++;
}
while(j<n2){
  final[k] = arr2[j];
  j++;
  k++;
}

for (int i = 0; i < n1+n2; i++)
{
  cout << final[i] << " "<<flush;
}


delete[] final;

return 0;

}

