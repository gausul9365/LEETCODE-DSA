#include <iostream>
#include <vector>

using namespace std;

int fun(int n)
{
  if (n < 0)
    return 1;

  if (n % 2 != 0)
    cout << n << " ";

  return fun(n - 1);
}

int funRev(int n, int i)
{
  if (i > n)
    return 1;

  if (i % 2 != 0)
    cout << i << " ";

  return funRev(n, i + 1);
}

int main()
{
  int n = 15;

  fun(15);
  cout << endl;
  funRev(15, 0);
}