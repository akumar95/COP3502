#include <stdlib.h>
#include <stdio.h>

// Indirect recursion there may be one or more functions calling each other in loop fashion.

void funB(int n);

void funA(int n);

void funA(int n)
{
  if (n > 0)
  {
    printf("%d\n", n);
    funB(n - 1);
  }
}

void funB(int n)
{
  if (n > 1)
  {
    printf("%d\n", n);
    funA(n / 2);
  }
}

int main()
{
  funA(20);

  return 0;
}