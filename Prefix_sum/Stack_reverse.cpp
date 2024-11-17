#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int reverseArray(int arr[], int n)
{
  stack<int> s;
  for (int i = 0; i < n; i++)
  {

    s.push(arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] = s.top();
    s.pop();
  }
}

int main()
{

  int arr[] = {4, 6, 8, 9};

  int n = sizeof(arr) / sizeof(arr[0]);

  // vector<int> rev_arr(n); // hmne three variable ka use kr liya tha jo space jyada le rhi aur shi approch bhi nhi tha is liye hm ise nhi lenge original arr ko hi overwrite krkr use update kr denge reverse array k sath

  reverseArray(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
