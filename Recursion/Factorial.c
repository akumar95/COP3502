#include <stdio.h>
#include <stdlib.h>

// Solution to find the factorial of a n value recuesively and iteratively..

// Function to recursively find the factorial.
int fact(int n)
{
  if (n == 0)
    return 1;
  return fact(n - 1) * n;
}

// Function to iteratively the factorial.
int iFact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
    f *= i;
}

int main()
{
  int r;
  r = fact(3);
  printf("%d\n", r);

  return 0;
}