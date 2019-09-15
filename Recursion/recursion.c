#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Used void because the function is not returning anything.
// Parameter is of type int.
void rec(int n)
{
  // If n is greater than zero, continue with the function.
  if (n > 0)
  {
    // Print the variable and then recursively call the function.
    printf("%d\n", n);
    rec(n - 1);
    // Because we are printing the value before the recursive call, the value decreases. This is known as tail recursion.
  }
}

int main()
{
  // Declare x as value 3.
  int x = 3;

  // Call function with the variable 'x'.
  rec(x);

  return 0;
}