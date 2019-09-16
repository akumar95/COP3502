#include <stdio.h>
#include <stdlib.h>

// A recursive function will pass a parameter as a recursive call.

int fun(int n)
{
  if (n > 100)
    return n - 10;
  return fun(fun(n + 11));
}

int main()
{
  // Temporary variable to assign the result of function.
  int r;
  r = fun(95);
  printf("%d\n", r);

  return 0;
}