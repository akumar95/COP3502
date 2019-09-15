#include <stdlib.h>
#include <stdio.h>
// Because it is in the global scope, no issues occur with the solution.
int x = 0;

int rec(int n)
{
  // static int x = 0;
  // n variable decreases while x variable increases.
  if (n > 0)
  {
    x++;
    // return rec(n - 1) + n;
    return rec(n - 1) + x;
  }
  return 0;
}

int main()
{
  int r;
  r = rec(5);
  printf("%d\n", r);
  r = rec(5);
  printf("%d\n", r);

  return 0;
}