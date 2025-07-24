#include <iostream>
using namespace std;
int main()
{
  // your code goes here
  int n, m, i, j, res = 1;
  cin >> n >> m;
  i = (n + 1) / 2;
  j = (m + 1) / 2;

  res *= i * j;
  cout << res;

  return 0;
}