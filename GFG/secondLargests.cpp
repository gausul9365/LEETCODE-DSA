#include <iostream>
#include <climits>

using namespace std;

int secondLargest(int arr[], int n)
{
  int largest = INT_MIN;
  int secondLargest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      secondLargest = largest;
      largest = arr[i];
    }
    else
    {
      if (arr[i] != largest && arr[i] > secondLargest)
      {
        secondLargest = arr[i];
      }
    }
  }
   cout<<secondLargest;
}

int main()
{

  int arr[] = {32, 7, 4, 8, 46, 97};
  int n = sizeof(arr) / sizeof(arr[0]);
  secondLargest(arr, n);
  return 0;
}
