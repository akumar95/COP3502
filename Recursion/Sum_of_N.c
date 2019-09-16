#include <stdlib.h>
#include <stdio.h>

// This program sums the value of n recursively (n-1);

int sum(int n)
{
  if (n == 0)
    return 0;
  return sum(n - 1) + n;
}

// For-loop version (iteratively).
int iSum(int n)
{
  int s = 0;
  for (int i = 0; i <= n; i++)
    s += i;
  return s;
}

int main()
{

  // Assign a temp value of sum function then print.
  int r;
  r = sum(5);
  printf("%d\n", r);

  return 0;
}