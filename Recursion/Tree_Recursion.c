#include <stdlib.h>
#include <stdio.h>

void fun(int n)
{
  if (n > 0)
  {
    // This tree recursion works by decreasing value. As soon as the value hits 0, the function goes back to the previous call where the value n = 1.
    // Now, it will execute the second call at n = 1 and go through the if loop.
    printf("%d\n", n);
    fun(n - 1);
    fun(n - 1);
  }
}

int main()
{
  fun(3);

  return 0;
}