#include <iostream>
using namespace std;
int main()
{
  // your code goes here
  long a, b, h;
  cin >> b >> a;
  h = (2 * a) / b;
  if ((2 * a) % b == 0)
    cout << h;
  else
    cout << h + 1;

  return 0;
}