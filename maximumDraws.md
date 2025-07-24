# Maximum Draws

## Problem Statement

A student is ready to leave for an interview and needs a matching pair of socks immediately. If there are `n` colors of socks in the drawer, what is the minimum number of socks that need to be removed to be certain of having a matching pair?

This is a classic application of the Pigeonhole Principle. In the worst-case scenario, you would pick one sock of each color before you pick a second one of any color.

## Input Format

The input will be a single integer, `n`, representing the number of different colors of socks in the drawer.

## Constraints

- `1 <= n < 10^6`

## Output Format

Print a single integer representing the total number of socks that need to be removed to guarantee a matching pair.

## Sample Cases

### Sample Input 1

1

### Sample Output 1

2

**Explanation:** If there is only one color of sock, picking any two socks will guarantee a matching pair.

### Sample Input 2

2

### Sample Output 2

3

**Explanation:** If there are two colors of socks (e.g., black and white), in the worst case, you could pick one black sock and one white sock. The very next sock you pick (the third one) _must_ match one of the previous two, thus creating a pair.

### Solution in C++

```cpp
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n;
    cin >> n;
    cout << n + 1;
    return 0;
}
```
