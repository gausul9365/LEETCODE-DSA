#include <iostream>
#include <vector>
#include <unordered_map>
//arr = [10, 15, 3, 7], target = 17

using namespace std;

int main() {

vector<int>arr = {10, 15, 3, 7};
int n = arr.size();
int target =17;


// brute force aproach
// for (int i = 0; i < n; i++)
// {
//   for (int j = 0; j < n; j++)
//   {
//     if(arr[i] + arr[j] == target){
//       cout << "True";
//       return 0;
//     }
//   }
// }


// hashing aproach
unordered_map<int, int>ump;
for(int i=0; i<n; i++){
  int current_num = arr[i];
  int complement = target - current_num;
  
  
  if (ump.find(complement) != ump.end())
  {
    cout<<"true";
  }
  ump[current_num] = i;
}

  cout<<"false";
  return 0;

}

