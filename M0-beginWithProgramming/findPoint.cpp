#include <iostream>
using namespace std;
int main()
{
  // your code goes here
  float x1, x2, y1, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2;
  x3 = (2 * x2) - x1;
  y3 = (2 * y2) - y1;

  cout << x3 << " " << y3;

  return 0;
}